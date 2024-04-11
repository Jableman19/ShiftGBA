#include "player.cpp"
#include "collidingSpace.cpp"
#include "bn_regular_bg_items_floor.h"
#include "bn_regular_bg_items_shift.h"
#include "bn_regular_bg_ptr.h"
#include "bn_sprite_items_basic.h"
#include "bn_sprite_items_psprite.h"
#include "bn_sprite_items_textl.h"
#include "bn_sprite_items_textm.h"
#include "bn_sprite_items_textr.h"
#include "bn_sprite_items_table.h"
#include "bn_sprite_items_chair.h"
#include "bn_sprite_items_couch.h"
#include "bn_sprite_items_plant.h"
#include "bn_sprite_items_coffee.h"
#include "bn_sprite_items_bar.h"
#include "common_info.h"
#include "common_variable_8x8_sprite_font.h"
#include "bn_log.h"
#include <bn_sprite_palette_item.h>
#include <bn_sprite_palette_ptr.h>
#include <bn_color.h>
#include <bn_compression_type.h>
#include <bn_bpp_mode.h>
#include <bn_window.h>
#include "bn_rect_window.h"

bool AABB(int x1, int y1, int w1, int h1, int x2, int y2, int w2, int h2){
    //axis aligned bounding box collision detection, x and y are center points
    return (x1 - w1/2 < x2 + w2/2 && x1 + w1/2 > x2 - w2/2 && y1 - h1/2 < y2 + h2/2 && y1 + h1/2 > y2 - h2/2);
}

void intro(){
    bn::regular_bg_ptr intro_show = bn::regular_bg_items::shift.create_bg(0, 0);

    while(!bn::keypad::b_pressed() && !bn::keypad::a_pressed() && !bn::keypad::start_pressed()){
        bn::core::update();
    }

    intro_show.set_visible(false);
}

void entryway(){
    bn::vector<CollidingSpace, 12> collidingSpaces;

    bn::camera_ptr camera = bn::camera_ptr::create(0, 0);
    bn::sprite_ptr table1 = bn::sprite_items::table.create_sprite(120, 10);
    bn::sprite_ptr table2 = bn::sprite_items::table.create_sprite(152, 10);
    bn::sprite_ptr coffee = bn::sprite_items::coffee.create_sprite(160, -95);
    CollidingSpace collidingSpace1(160, -95, 12, 25);
    collidingSpaces.push_back(collidingSpace1);
    coffee.set_camera(camera);



    Dialogue dialogue1("These tables are the center of this house.", "FISIs, family dinners, late nights...");
    Dialogue dialogue2("they serve as a place for us" , "to come together!");
    bn::vector<Dialogue, 3> dialogues1;
    dialogues1.push_back(dialogue1);
    dialogues1.push_back(dialogue2);
    Interactable interactable1(136, 10, 64, 32, dialogues1);
    bn::vector<Interactable, 8> interactables;
    interactables.push_back(interactable1);


    bn::sprite_ptr chair1 = bn::sprite_items::chair.create_sprite(179, 3);
    bn::sprite_ptr chair2 = bn::sprite_items::chair.create_sprite(93, 3);
    chair2.set_camera(camera);
    chair2.set_horizontal_flip(true);
    bn::vector<Dialogue, 3> dialogues2;
    Dialogue dialogue3("These ratty, red chairs...", "So many past creators have sat here.");
    Dialogue dialogue4("Some have even written poems about them!", "");
    Dialogue dialogue5("May they live on in the next house", "");
    dialogues2.push_back(dialogue3);
    dialogues2.push_back(dialogue4);
    dialogues2.push_back(dialogue5);
    Interactable interactable2(93, 6, 14, 25, dialogues2);
    interactables.push_back(interactable2);

    bn::sprite_ptr couch = bn::sprite_items::couch.create_sprite(192, -95);
    couch.set_camera(camera);
    bn::vector<Dialogue, 3> dialogues3;
    Dialogue dialogue6("Theres no way around it... this couch", "is ugly as sin - and just as gross.");
    Dialogue dialogue7("But it's been here for years,", "and it's not going anywhere.");
    Dialogue dialogue8("It's seen some serious shit", "");
    dialogues3.push_back(dialogue6);
    dialogues3.push_back(dialogue7);
    dialogues3.push_back(dialogue8);
    Interactable interactable3(192, -95, 16, 32, dialogues3);
    interactables.push_back(interactable3);

    bn::sprite_ptr plant = bn::sprite_items::plant.create_sprite(192, -120);
    plant.set_camera(camera);
    bn::vector<Dialogue, 3> dialogues4;
    Dialogue dialogue9("Don't even get me started on this plant.", "SUCH a drama queen.");
    dialogues4.push_back(dialogue9);
    Interactable interactable4(192, -120, 16, 16, dialogues4);
    interactables.push_back(interactable4);

    bn::sprite_ptr bar = bn::sprite_items::bar.create_sprite(192, -40);
    bar.set_camera(camera);
    bn::vector<Dialogue, 3> dialogues5;
    Dialogue dialogue10("I don't need to tell you what this is for.", "Just don't ask about the barmats...");
    dialogues5.push_back(dialogue10);
    Interactable interactable5(192,-40,16,32, dialogues5);
    interactables.push_back(interactable5);

    bn::sprite_ptr psprite = bn::sprite_items::psprite.create_sprite(0, 0);
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
    bn::vector<bn::sprite_ptr, 64> text_sprites;

    bn::regular_bg_ptr bg = bn::regular_bg_items::floor.create_bg(0, 0);


    bn::sprite_ptr text_l = bn::sprite_items::textl.create_sprite(-88, -49);
    bn::sprite_ptr text_m = bn::sprite_items::textm.create_sprite(-44, -49);
    bn::sprite_ptr text_m_2 = bn::sprite_items::textm.create_sprite(44, -49);
    bn::sprite_ptr text_m_3 = bn::sprite_items::textm.create_sprite(0, -49);
    bn::sprite_ptr text_r = bn::sprite_items::textr.create_sprite(88, -49);
    //set text box to invisible
    text_l.set_visible(false);
    text_m.set_visible(false);
    text_m_2.set_visible(false);
    text_m_3.set_visible(false);
    text_r.set_visible(false);


    bg.set_camera(camera);
    psprite.set_camera(camera);
    table1.set_camera(camera);
    table2.set_camera(camera);
    chair1.set_camera(camera);


    bn::window outside_window = bn::window::outside();
    outside_window.set_show_bg(bg, false);

    bn::rect_window entry_window = bn::rect_window::internal();
    entry_window.set_boundaries(-230, -50, 50, 200);
    entry_window.set_camera(camera);


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
            if(canMove){
                for(int i = 0; i < collidingSpaces.size(); i++){
                    if(AABB(x - 1, y + 7, player.getWidth(), player.getHeight() - 16, collidingSpaces[i]._x, collidingSpaces[i]._y, collidingSpaces[i]._width, collidingSpaces[i]._height)){
                        canMove = false;
                        break;
                    }
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
            if(canMove){
                for(int i = 0; i < collidingSpaces.size(); i++){
                    if(AABB(x + 1, y + 7, player.getWidth(), player.getHeight() - 16, collidingSpaces[i]._x, collidingSpaces[i]._y, collidingSpaces[i]._width, collidingSpaces[i]._height)){
                        canMove = false;
                        break;
                    }
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
            if(canMove){
                for(int i = 0; i < collidingSpaces.size(); i++){
                    if(AABB(x, y + 6, player.getWidth(), player.getHeight() - 16, collidingSpaces[i]._x, collidingSpaces[i]._y, collidingSpaces[i]._width, collidingSpaces[i]._height)){
                        canMove = false;
                        break;
                    }
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
            if(canMove){
                for(int i = 0; i < collidingSpaces.size(); i++){
                    if(AABB(x, y + 8, player.getWidth(), player.getHeight() - 16, collidingSpaces[i]._x, collidingSpaces[i]._y, collidingSpaces[i]._width, collidingSpaces[i]._height)){
                        canMove = false;
                        break;
                    }
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

int main()
{
    bn::core::init();

    intro();

    entryway();
}
