#include "player.cpp"
#include "bn_regular_bg_items_bg.h"
#include "bn_regular_bg_items_shift.h"
#include "bn_regular_bg_ptr.h"
#include "bn_sprite_items_basic.h"
#include "bn_sprite_items_psprite.h"
#include "bn_sprite_items_textl.h"
#include "bn_sprite_items_textm.h"
#include "bn_sprite_items_textr.h"
#include "common_info.h"
#include "common_variable_8x8_sprite_font.h"
#include "bn_log.h"
#include <bn_sprite_palette_item.h>
#include <bn_sprite_palette_ptr.h>
#include <bn_color.h>
#include <bn_compression_type.h>
#include <bn_bpp_mode.h>

bool AABB(int x1, int y1, int w1, int h1, int x2, int y2, int w2, int h2){
    //axis aligned bounding box collision detection, x and y are center points
    return (x1 - w1/2 < x2 + w2/2 && x1 + w1/2 > x2 - w2/2 && y1 - h1/2 < y2 + h2/2 && y1 + h1/2 > y2 - h2/2);
}

int main()
{
    bn::core::init();

    bn::regular_bg_ptr intro_show = bn::regular_bg_items::shift.create_bg(0, 0);

    while(!bn::keypad::b_pressed() && !bn::keypad::a_pressed() && !bn::keypad::start_pressed()){
        bn::core::update();
    }

    intro_show.set_visible(false);

    bn::sprite_ptr interact = bn::sprite_items::basic.create_sprite(100, 0);

    bn::sprite_ptr psprite = bn::sprite_items::psprite.create_sprite(0, 0);

    Dialogue dialogue1("I'm just a box! but i could be anything!", "Line 2 is awesome!!");
    Dialogue dialogue2("I'm More than a box!!!!" , "");
    bn::vector<Dialogue, 5> dialogues1;
    dialogues1.push_back(dialogue1);
    dialogues1.push_back(dialogue2);
    Interactable interactable1(interact, 100, 0, 32, 32, dialogues1);

    bn::vector<Interactable, 32> interactables;
    interactables.push_back(interactable1);

    bn::sprite_text_generator text_generator(common::variable_8x8_sprite_font);

   //text color with 16 colors
    bn::color textColor[] = {
        bn::color(30, 30, 30),
        bn::color(0,0,0),//X
        bn::color(0,0,0),//X
        bn::color(0,0,0),//X
        bn::color(0,0,0),//X
        bn::color(0,0,0),//X
        bn::color(0,0,0),//X
        bn::color(0,0,0),//X
        bn::color(0,0,0),//X
        bn::color(0,0,0),//X
        bn::color(0,0,0),//X
        bn::color(0,0,0),//X
        bn::color(28,28,28),//OUTLINE
        bn::color(0,0,0),//X
        bn::color(22.5,22.5,26.6),//TEXT
        bn::color(31,31,31),
    };

    text_generator.set_palette_item(bn::sprite_palette_item(bn::span<const bn::color>(textColor, 16), bn::bpp_mode::BPP_4, bn::compression_type::NONE));
    bn::vector<bn::sprite_ptr, 128> text_sprites;

    bn::regular_bg_ptr bg = bn::regular_bg_items::bg.create_bg(0, 0);


    bn::sprite_ptr text_l = bn::sprite_items::textl.create_sprite(-88, -48);
    bn::sprite_ptr text_m = bn::sprite_items::textm.create_sprite(-44, -48);
    bn::sprite_ptr text_m_2 = bn::sprite_items::textm.create_sprite(44, -48);
    bn::sprite_ptr text_m_3 = bn::sprite_items::textm.create_sprite(0, -48);
    bn::sprite_ptr text_r = bn::sprite_items::textr.create_sprite(88, -48);
    //set text box to invisible
    text_l.set_visible(false);
    text_m.set_visible(false);
    text_m_2.set_visible(false);
    text_m_3.set_visible(false);
    text_r.set_visible(false);

    bn::camera_ptr camera = bn::camera_ptr::create(0, 0);

    bg.set_camera(camera);
    psprite.set_camera(camera);
    interact.set_camera(camera);


    //camera
    // bn::camera_ptr camera = bn::camera_ptr::create(0, 0);

    Player player(psprite, 0, 0, 14, 20, camera);

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
                if(AABB(x - 1, y + 7, player.getWidth(), player.getHeight() - 16, interactables[i].getX(), interactables[i].getY(), interactables[i].getWidth(), interactables[i].getHeight())){
                    //set player's collided text to the interactable object's collided text
                    player.setDialogues(interactables[i].getDialogues());
                    canMove = false;
                    break;
                }
            }
            player.spriteChange(2);
            if(canMove){
                player.moveRequest(x - 1, y);
                player.clearText();
            }
        }
        else if( bn::keypad::right_held() )
        {
            for(int i = 0; i < interactables.size(); i++){
                if(AABB(x + 1, y + 7, player.getWidth(), player.getHeight() - 16, interactables[i].getX(), interactables[i].getY(), interactables[i].getWidth(), interactables[i].getHeight())){
                    player.setDialogues(interactables[i].getDialogues());
                    canMove = false;
                    break;
                }
            }
            player.spriteChange(0);
            if(canMove){
                player.moveRequest(x + 1, y);
                player.clearText();
            }
        }
        else if( bn::keypad::up_held() )
        {
            for(int i = 0; i < interactables.size(); i++){
                if(AABB(x, y + 6, player.getWidth(), player.getHeight() - 16, interactables[i].getX(), interactables[i].getY(), interactables[i].getWidth(), interactables[i].getHeight())){
                    player.setDialogues(interactables[i].getDialogues());
                    canMove = false;
                    break;
                }
            }
            player.spriteChange(3);
            if(canMove){
                player.moveRequest(x, y - 1);
                player.clearText();
            }
        }
        else if( bn::keypad::down_held() )
        {
            for(int i = 0; i < interactables.size(); i++){
                if(AABB(x, y + 8, player.getWidth(), player.getHeight() - 16, interactables[i].getX(), interactables[i].getY(), interactables[i].getWidth(), interactables[i].getHeight())){
                    player.setDialogues(interactables[i].getDialogues());
                    canMove = false;
                    break;
                }
            }
            player.spriteChange(1);
            if(canMove){
                player.moveRequest(x, y + 1);
                player.clearText();
            }
        }
        else{
            player.standing();
        }
        if(!canMove){
            player.standing();
        }

        bn::vector<Dialogue, 5> dialogues = player.getDialogues();

        //checking player interaction with collidable objects
        if( bn::keypad::a_pressed() && !dialogues.empty())
        {
            //create text box at top of screen 
            text_l.set_visible(true);
            text_m.set_visible(true);
            text_r.set_visible(true);
            text_m_2.set_visible(true);
            text_m_3.set_visible(true);
            //use text generator to display player's collided text
            text_sprites.clear();
            text_generator.set_center_alignment();

            

            for(int i = 0; i < dialogues.size(); i++){
                text_generator.generate(0, -65, dialogues[i].getText(), text_sprites);
                text_generator.generate(0, -50, dialogues[i].getText2(), text_sprites);
                bn::core::update();
                while(!bn::keypad::b_pressed() && !bn::keypad::a_pressed()){
                    bn::core::update();
                }
                text_sprites.clear();
            }
            
            //log the collided text
            // BN_LOG(player.getCollidedText());
            text_l.set_visible(false);
            text_m.set_visible(false);
            text_r.set_visible(false);
            text_m_2.set_visible(false);
            text_m_3.set_visible(false);

        }

    }
}
