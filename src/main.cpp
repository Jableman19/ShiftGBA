#include "player.cpp"
#include "bn_regular_bg_items_bg.h"
#include "bn_regular_bg_ptr.h"
#include "bn_sprite_items_basic.h"
#include "common_info.h"
#include "common_variable_8x8_sprite_font.h"
#include "bn_log.h"

bool AABB(int x1, int y1, int w1, int h1, int x2, int y2, int w2, int h2){
    return x1 < x2 + w2 && x1 + w1 > x2 && y1 < y2 + h2 && y1 + h1 > y2;
}

int main()
{
    bn::core::init();

    bn::sprite_text_generator text_generator(common::variable_8x8_sprite_font);
    bn::vector<bn::sprite_ptr, 128> text_sprites;

    bn::regular_bg_ptr bg = bn::regular_bg_items::bg.create_bg(0, 0);
    bn::sprite_ptr pc = bn::sprite_items::basic2.create_sprite(0, 0);
    bn::camera_ptr camera = bn::camera_ptr::create(0, 0);
    bn::sprite_ptr interact = bn::sprite_items::basic.create_sprite(100, 0);

    Interactable interactable1(interact, 100, 0, 32, 32, "I'm just a box! but i could be anything!");

    bn::vector<Interactable, 32> interactables;
    interactables.push_back(interactable1);

    bg.set_camera(camera);
    pc.set_camera(camera);
    interact.set_camera(camera);


    //camera
    // bn::camera_ptr camera = bn::camera_ptr::create(0, 0);

    Player player(pc, 0, 0, 32, 32, camera);

    while(true)
    {
        bn::core::update();

        int x = player.getPositionX();
        int y = player.getPositionY();

        bool canMove = true;

        //checking player movement with collidable objects

        if( bn::keypad::left_held() )
        {
            //for every interactable object
            for(int i = 0; i < interactables.size(); i++){
                //if the player is colliding with the interactable object
                if(AABB(x - 1, y, 32, 32, interactables[i].getX(), interactables[i].getY(), interactables[i].getWidth(), interactables[i].getHeight())){
                    //set player's collided text to the interactable object's collided text
                    player.setCollidedText(interactables[i].getCollidedText());
                    canMove = false;
                    break;
                }
            }
            if(canMove){
                player.moveRequest(x - 1, y, 2);
                player.clearText();
            }
        }
        else if( bn::keypad::right_held() )
        {
            for(int i = 0; i < interactables.size(); i++){
                if(AABB(x + 1, y, 32, 32, interactables[i].getX(), interactables[i].getY(), interactables[i].getWidth(), interactables[i].getHeight())){
                    player.setCollidedText(interactables[i].getCollidedText());
                    canMove = false;
                    break;
                }
            }
            if(canMove){
                player.moveRequest(x + 1, y, 0);
                player.clearText();
            }
        }
        else if( bn::keypad::up_held() )
        {
            for(int i = 0; i < interactables.size(); i++){
                if(AABB(x, y - 1, 32, 32, interactables[i].getX(), interactables[i].getY(), interactables[i].getWidth(), interactables[i].getHeight())){
                    player.setCollidedText(interactables[i].getCollidedText());
                    canMove = false;
                    break;
                }
            }
            if(canMove){
                player.moveRequest(x, y - 1, 3);
                player.clearText();
            }
        }
        else if( bn::keypad::down_held() )
        {
            for(int i = 0; i < interactables.size(); i++){
                if(AABB(x, y + 1, 32, 32, interactables[i].getX(), interactables[i].getY(), interactables[i].getWidth(), interactables[i].getHeight())){
                    player.setCollidedText(interactables[i].getCollidedText());
                    canMove = false;
                    break;
                }
            }
            if(canMove){
                player.moveRequest(x, y + 1, 1);
                player.clearText();
            }
        }

        //checking player interaction with collidable objects
        if( bn::keypad::a_pressed() && !player.getCollidedText().empty())
        {
            //use text generator to display player's collided text
            text_sprites.clear();
            text_generator.set_center_alignment();
            text_generator.generate(0, -60, player.getCollidedText(), text_sprites);
            //log the collided text
            // BN_LOG(player.getCollidedText());
            bn::core::update();
            while(!bn::keypad::b_pressed() && !bn::keypad::a_pressed()){
                bn::core::update();
            }
            text_sprites.clear();

        }

    }
}
