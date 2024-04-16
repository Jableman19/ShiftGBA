#include "player.cpp"
#include "collidingSpace.cpp"
#include "bn_regular_bg_items_floor.h"
#include "bn_regular_bg_items_shift.h"
#include "bn_regular_bg_items_start.h"
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
#include "bn_sprite_items_chairs.h"
#include "bn_sprite_items_printer.h"
#include "bn_sprite_items_guitar.h"
#include "bn_sprite_items_piano.h"
#include "bn_sprite_items_wallart.h"
#include "bn_sprite_items_hei.h"
#include "bn_sprite_items_wall2.h"
#include "bn_regular_bg_items_rug.h"
#include "bn_sprite_items_bar.h"
#include "bn_sprite_items_wall.h"
#include "bn_sprite_items_thinwall.h"
#include "bn_sprite_items_door.h"
#include "bn_sprite_items_sidedoor.h"
#include "bn_sprite_items_stairs.h"
#include "bn_sprite_items_black.h"
#include "bn_sprite_items_projector.h"
#include "bn_sprite_items_bookshelf.h"
#include "bn_sprite_items_games.h"
#include "bn_sprite_items_screen.h"
#include "bn_sprite_items_futon.h"
#include "bn_sprite_items_floormat.h"
#include "bn_sprite_items_bean.h"
#include "bn_sprite_items_corner.h"
#include "common_variable_8x8_sprite_font.h"
#include <bn_sprite_palette_item.h>
#include <bn_sprite_palette_ptr.h>
#include <bn_color.h>
#include <bn_compression_type.h>
#include <bn_bpp_mode.h>
#include "bn_rect_window.h"
#include "bn_sound_items.h"

bool AABB(int x1, int y1, int w1, int h1, int x2, int y2, int w2, int h2){
    //axis aligned bounding box collision detection, x and y are center points
    return (x1 - w1/2 < x2 + w2/2 && x1 + w1/2 > x2 - w2/2 && y1 - h1/2 < y2 + h2/2 && y1 + h1/2 > y2 - h2/2);
}

void intro(){
    bn::regular_bg_ptr start_show = bn::regular_bg_items::start.create_bg(0, 0);
    start_show.set_visible(false);
    bn::regular_bg_ptr intro_show = bn::regular_bg_items::shift.create_bg(0, 0);
    int framesInIntro = 0;

    while((!bn::keypad::b_pressed() && !bn::keypad::a_pressed() && !bn::keypad::start_pressed()) && framesInIntro < 120){
        bn::core::update();
        framesInIntro++;
    }

    intro_show.set_visible(false);
    start_show.set_visible(true);
    while(!bn::keypad::start_pressed()){
        bn::core::update();
    }
    bn::sound_items::click.play();
}

int entryway(int px, int py){
    bn::vector<CollidingSpace, 12> collidingSpaces;
    bn::vector<Interactable, 11> interactables;
    bn::camera_ptr camera = bn::camera_ptr::create(px, py);


    //Walls -230, -50, 50, 200
    CollidingSpace wall1(150, -120, 76, 2); //back
    collidingSpaces.push_back(wall1);
    CollidingSpace wall1_5(84, -120, 6, 2); //back2
    collidingSpaces.push_back(wall1_5);
    CollidingSpace wall2(-12, 0, 2, 500); //left
    collidingSpaces.push_back(wall2);
    CollidingSpace wall3(0, 52, 500, 2); //bottom
    collidingSpaces.push_back(wall3);
    CollidingSpace wall4(202, 0, 2, 500); //right
    collidingSpaces.push_back(wall4);
    CollidingSpace wall5(80, -75, 7, 148); // inside left
    collidingSpaces.push_back(wall5);

    //VOIDS
    bn::sprite_ptr void1 = bn::sprite_items::black.create_sprite(52, -150);
    void1.set_camera(camera);
    bn::sprite_ptr void3 = bn::sprite_items::black.create_sprite(52, -66);
    void3.set_camera(camera);
    bn::sprite_ptr void4 = bn::sprite_items::black.create_sprite(0, -60);
    void4.set_camera(camera);
    bn::sprite_ptr void5 = bn::sprite_items::black.create_sprite(0, -124);
    void5.set_camera(camera);
    bn::sprite_ptr void6 = bn::sprite_items::black.create_sprite(0, -150);
    void6.set_camera(camera);

    //VisualWalls
    bn::sprite_ptr bookWall = bn::sprite_items::wall.create_sprite(52, -50);
    bookWall.set_camera(camera);
    bn::sprite_ptr wallV3 = bn::sprite_items::thinwall.create_sprite(80, -32);
    wallV3.set_camera(camera); //Drawing visual wall before void for layering
    bn::sprite_ptr void2 = bn::sprite_items::black.create_sprite(52, -86);
    void2.set_camera(camera);
    bn::sprite_ptr wallV1 = bn::sprite_items::wall.create_sprite(168, -150);
    wallV1.set_camera(camera);
    bn::sprite_ptr wallV2 = bn::sprite_items::wall.create_sprite(148, -150);
    wallV2.set_camera(camera);
    bn::sprite_ptr door = bn::sprite_items::door.create_sprite(100, -150);
    door.set_camera(camera);
    bn::sprite_ptr sideDoor = bn::sprite_items::sidedoor.create_sprite(99, -80);
    sideDoor.set_camera(camera);
    Dialogue doorD("That's Jonah's room - looks like it's locked!", "He made this sim. Thanks for playing ;)");
    bn::vector<Dialogue, 2> doorDialogues;
    doorDialogues.push_back(doorD);
    Interactable doorI(82, -75, 2, 13, doorDialogues);
    doorI._auto = true;
    interactables.push_back(doorI);

    Dialogue kitchen("That way is to the kitchen and basement.", "Believe me, you don't want to see either.");
    bn::vector<Dialogue, 2> kitchenD;
    kitchenD.push_back(kitchen);
    Interactable kitchenI(100, -125, 5, 5, kitchenD);
    kitchenI._auto = true;
    interactables.push_back(kitchenI);

    bn::sprite_ptr wallart = bn::sprite_items::wallart.create_sprite(148, -137);
    wallart.set_camera(camera);
    Dialogue wallartD("Beautiful art and countless photos line", "the walls. These are our memories.");
    bn::vector<Dialogue, 2> wallartDialogues;
    wallartDialogues.push_back(wallartD);
    Interactable wallartI(150, -120, 76, 3, wallartDialogues);
    interactables.push_back(wallartI);

    //ITEMS
    bn::sprite_ptr bookshelf = bn::sprite_items::bookshelf.create_sprite(52, -40);
    bookshelf.set_camera(camera);
    Dialogue bookshelfD("The shift house bookshelf! Lot's of great", "books left by creators over the years...");
    Dialogue bookshelfD2("And at least 3 copies of ", "Cracking the Coding Interview >.<");
    bn::vector<Dialogue, 2> bookshelfDialogues;
    bookshelfDialogues.push_back(bookshelfD);
    bookshelfDialogues.push_back(bookshelfD2);
    Interactable bookshelfI(45, -40, 53, 64, bookshelfDialogues);
    interactables.push_back(bookshelfI);

    bn::sprite_ptr stairs = bn::sprite_items::stairs.create_sprite(4, -20);
    stairs.set_camera(camera);
    bn::vector<Dialogue, 2> stairsD;
    Interactable stairsI(4, -20, 10, 10, stairsD);
    stairsI._newScene = 1;
    interactables.push_back(stairsI);

    bn::sprite_ptr table1 = bn::sprite_items::table.create_sprite(130, 30);
    bn::sprite_ptr table2 = bn::sprite_items::table.create_sprite(162, 30);
    bn::sprite_ptr coffee = bn::sprite_items::coffee.create_sprite(155, -95);
    CollidingSpace collidingSpace1(155, -95, 12, 25);
    collidingSpaces.push_back(collidingSpace1);
    coffee.set_camera(camera);
    bn::sprite_ptr chairs = bn::sprite_items::chairs.create_sprite(150, -120);
    chairs.set_camera(camera);
    CollidingSpace collidingSpace2(150, -120, 32, 16);
    collidingSpaces.push_back(collidingSpace2);


    Dialogue dialogue1("These tables are the center of this house.", "FISIs, family dinners, late nights...");
    Dialogue dialogue2("they serve as a place for us" , "to come together!");
    bn::vector<Dialogue, 2> dialogues1;
    dialogues1.push_back(dialogue1);
    dialogues1.push_back(dialogue2);
    Interactable interactable1(146, 30, 64, 32, dialogues1);
    interactables.push_back(interactable1);


    bn::sprite_ptr chair1 = bn::sprite_items::chair.create_sprite(189, 23);
    bn::sprite_ptr chair2 = bn::sprite_items::chair.create_sprite(103, 23);
    chair2.set_camera(camera);
    chair2.set_horizontal_flip(true);
    bn::vector<Dialogue, 2> dialogues2;
    Dialogue dialogue3("These ratty, red chairs...", "So many past creators have sat here.");
    Dialogue dialogue4("Some have even written poems about them!", "May they live on in the next house.");
    dialogues2.push_back(dialogue3);
    dialogues2.push_back(dialogue4);
    Interactable interactable2(103, 26, 14, 25, dialogues2);
    interactables.push_back(interactable2);

    bn::sprite_ptr plant = bn::sprite_items::plant.create_sprite(192, -120);
    plant.set_camera(camera);
    bn::vector<Dialogue, 2> dialogues4;
    Dialogue dialogue9("Don't even get me started on this plant.", "SUCH a drama queen.");
    dialogues4.push_back(dialogue9);
    Interactable interactable4(192, -110, 16, 16, dialogues4);
    interactables.push_back(interactable4);

    bn::sprite_ptr couch = bn::sprite_items::couch.create_sprite(192, -95);
    couch.set_camera(camera);
    bn::vector<Dialogue, 2> dialogues3;
    Dialogue dialogue6("Theres no way around it... this couch", "is ugly as sin - and just as gross.");
    Dialogue dialogue7("But it's been here for years,", "and seen some serious shit.");
    dialogues3.push_back(dialogue6);
    dialogues3.push_back(dialogue7);
    Interactable interactable3(192, -95, 16, 32, dialogues3);
    interactables.push_back(interactable3);

    bn::sprite_ptr hei = bn::sprite_items::hei.create_sprite(192, -65);
    hei.set_camera(camera);
    bn::vector<Dialogue, 2> dialogues6;
    Dialogue dialogue11("Oh that's our dog, Hei-Hei. I wouldn't", "risk petting him, but we love him");
    Dialogue heiD2("*pet* *pet* *pet* ...", "** C H O M P **");
    dialogues6.push_back(dialogue11);
    dialogues6.push_back(heiD2);
    Interactable interactable6(192,-65,16,16, dialogues6);
    interactables.push_back(interactable6);

    bn::sprite_ptr bar = bn::sprite_items::bar.create_sprite(192, -40);
    bar.set_camera(camera);
    bn::vector<Dialogue, 2> dialogues5;
    Dialogue dialogue10("I don't need to tell you what this is for.", "Just don't ask about the barmats...");
    dialogues5.push_back(dialogue10);
    Interactable interactable5(192,-40,16,32, dialogues5);
    interactables.push_back(interactable5);

    bn::sprite_ptr psprite = bn::sprite_items::psprite.create_sprite(px, py);
    bn::sprite_text_generator text_generator(common::variable_8x8_sprite_font);

   //text color with 16 colors
    // bn::color textColor[] = {
    //     bn::color(30, 30, 30),
    //     bn::color(0,0,0),//X
    //     bn::color(0,0,0),//X
    //     bn::color(0,0,0),//X
    //     bn::color(0,0,0),//X
    //     bn::color(0,0,0),//X
    //     bn::color(0,0,0),//X
    //     bn::color(0,0,0),//X
    //     bn::color(0,0,0),//X
    //     bn::color(0,0,0),//X
    //     bn::color(0,0,0),//X
    //     bn::color(0,0,0),//X
    //     bn::color(28,28,28),//OUTLINE
    //     bn::color(0,0,0),//X
    //     bn::color(22.5,22.5,26.6),//TEXT
    //     bn::color(31,31,31),
    // };

    // text_generator.set_palette_item(bn::sprite_palette_item(bn::span<const bn::color>(textColor, 16), bn::bpp_mode::BPP_4, bn::compression_type::NONE));
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

    text_generator.set_palette_item(bn::sprite_items::textl.palette_item());


    bg.set_camera(camera);
    psprite.set_camera(camera);
    table1.set_camera(camera);
    table2.set_camera(camera);
    chair1.set_camera(camera);


    bn::window outside_window = bn::window::outside();
    outside_window.set_show_bg(bg, false);

    bn::rect_window entry_window = bn::rect_window::internal();
    entry_window.set_boundaries(-182, -12, 50, 200);
    entry_window.set_camera(camera);


    Player player(psprite, px, py, 14, 20, camera);
    player.spriteChange(3);

    int framesWalked = 45;

    while(true)
    {
        bn::core::update();

        int x = player.getPositionX();
        int y = player.getPositionY();

        bool canMove = true;
        player.autoInteracted = false;

        //checking player movement with collidable objects

        if( bn::keypad::left_held() )
        {
            //for every interactable object
            for(int i = 0; i < interactables.size(); i++){
                //if the player is colliding with the interactable object
                if(AABB(x - 1, y + 7, player.getWidth(), player.getHeight() - 16, interactables[i].getX(), interactables[i].getY(), interactables[i].getWidth(), interactables[i].getHeight())){
                    //set player's collided text to the interactable object's collided text
                    player.setDialogues(interactables[i].getDialogues());
                    if(interactables[i]._auto){
                        player.autoInteracted = true;
                    }
                    if(interactables[i]._newScene != -1){
                        return interactables[i]._newScene;
                    }
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
                framesWalked++;
            }
        }
        else if( bn::keypad::right_held() )
        {
            for(int i = 0; i < interactables.size(); i++){
                if(AABB(x + 1, y + 7, player.getWidth(), player.getHeight() - 16, interactables[i].getX(), interactables[i].getY(), interactables[i].getWidth(), interactables[i].getHeight())){
                    player.setDialogues(interactables[i].getDialogues());
                    if(interactables[i]._auto){
                        player.autoInteracted = true;
                    }
                    if(interactables[i]._newScene != -1){
                        return interactables[i]._newScene;
                    }
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
                framesWalked++;
            }
        }
        else if( bn::keypad::up_held() )
        {
            for(int i = 0; i < interactables.size(); i++){
                if(AABB(x, y + 6, player.getWidth(), player.getHeight() - 16, interactables[i].getX(), interactables[i].getY(), interactables[i].getWidth(), interactables[i].getHeight())){
                    player.setDialogues(interactables[i].getDialogues());
                    canMove = false;
                    if(interactables[i]._auto){
                        player.autoInteracted = true;
                    }
                    if(interactables[i]._newScene != -1){
                        return interactables[i]._newScene;
                    }
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
                framesWalked++;
            }
        }
        else if( bn::keypad::down_held() )
        {
            for(int i = 0; i < interactables.size(); i++){
                if(AABB(x, y + 8, player.getWidth(), player.getHeight() - 16, interactables[i].getX(), interactables[i].getY(), interactables[i].getWidth(), interactables[i].getHeight())){
                    player.setDialogues(interactables[i].getDialogues());
                    if(interactables[i]._auto){
                        player.autoInteracted = true;
                    }
                    if(interactables[i]._newScene != -1){
                        return interactables[i]._newScene;
                    }
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
                framesWalked++;
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
        else{
            if(framesWalked >= 20){
                bn::sound_items::walk.play();
                framesWalked = 0;
            }
        }

        bn::vector<Dialogue, 2> dialogues = player.getDialogues();

        //checking player interaction with collidable objects
        if( (bn::keypad::a_pressed() && !dialogues.empty()) || player.autoInteracted)
        {
            bn::sound_items::click.play();
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

int attic(){
    bn::vector<CollidingSpace, 12> collidingSpaces;
    bn::vector<Interactable, 10> interactables;
    bn::camera_ptr camera = bn::camera_ptr::create(0, 20);

    //Walls
    CollidingSpace wall1(0, -120, 240, 2); //back
    collidingSpaces.push_back(wall1);
    CollidingSpace wall2(-75, 0, 2, 500); //left
    collidingSpaces.push_back(wall2);
    CollidingSpace wall3(0, 52, 500, 2); //bottom
    collidingSpaces.push_back(wall3);
    CollidingSpace wall4(75, 0, 2, 500); //right
    collidingSpaces.push_back(wall4);
    CollidingSpace wall5(-16, 40, 2, 32); // stairway
    collidingSpaces.push_back(wall5);
    CollidingSpace wall6(16, 40, 2, 32); // stairway
    collidingSpaces.push_back(wall6);


    //ITEMS BEHIND PLAYER
    //visual walls
    bn::sprite_ptr wallV1 = bn::sprite_items::wall2.create_sprite(0, -152);
    wallV1.set_camera(camera);
    bn::sprite_ptr wallV2 = bn::sprite_items::wall2.create_sprite(64, -152);
    wallV2.set_camera(camera);
    bn::sprite_ptr wallV3 = bn::sprite_items::wall2.create_sprite(-64, -152);
    wallV3.set_camera(camera);

    //voids
    bn::sprite_ptr void1 = bn::sprite_items::black.create_sprite(107, -152);
    void1.set_camera(camera);
    bn::sprite_ptr void2 = bn::sprite_items::black.create_sprite(-107, -152);
    void2.set_camera(camera);

    bn::sprite_ptr stairs = bn::sprite_items::stairs.create_sprite(0, 40);
    stairs.set_camera(camera);
    bn::vector<Dialogue, 2> stairsD;
    Interactable stairsI(0, 40, 10, 10, stairsD);
    stairsI._newScene = 0;
    interactables.push_back(stairsI);
    
    bn::sprite_ptr screen = bn::sprite_items::screen.create_sprite(-60, -60);
    screen.set_camera(camera);
    CollidingSpace screenCS(-72, -60, 30, 60);
    collidingSpaces.push_back(screenCS);

    bn::sprite_ptr games = bn::sprite_items::games.create_sprite(-65, -20);
    games.set_camera(camera);
    bn::vector<Dialogue, 2> gamesD;
    Dialogue gamesD1("Frantic games of Overcooked, heated NHL," , "late night Mario Kart, and RDR2 Poker...");
    Dialogue gamesD2("A place for serious bonding", "and endless good times.");
    gamesD.push_back(gamesD1);
    gamesD.push_back(gamesD2);
    Interactable gamesI(-65, -20, 16, 16, gamesD);
    interactables.push_back(gamesI);

    bn::sprite_ptr guitar = bn::sprite_items::guitar.create_sprite(-65, -10);
    guitar.set_camera(camera);
    bn::vector<Dialogue, 2> guitarD;
    Dialogue guitarD1("That's our guitar! many times we've", "stayed up til 4am playing songs.");
    guitarD.push_back(guitarD1);
    Interactable guitarI(-65, -5, 10, 20, guitarD);
    interactables.push_back(guitarI);

    bn::sprite_ptr piano = bn::sprite_items::piano.create_sprite(67, 5);
    piano.set_camera(camera);
    bn::vector<Dialogue, 2> pianoD;
    Dialogue pianoD1("\"dah dah dah, doo doo doo", "dee dee dah dah dey\"");
    pianoD.push_back(pianoD1);
    Interactable pianoI(67, 5, 16, 32, pianoD);
    interactables.push_back(pianoI);

    bn::sprite_ptr projector = bn::sprite_items::projector.create_sprite(0, -50);
    projector.set_camera(camera);
    bn::vector<Dialogue, 2> projectorD;
    Dialogue projectorD1("Movie night central", "right here.");
    projectorD.push_back(projectorD1);
    Interactable projectorI(0, -50, 16, 16, projectorD);
    interactables.push_back(projectorI);

    bn::sprite_ptr corner = bn::sprite_items::corner.create_sprite(65, -90);
    corner.set_camera(camera);
    CollidingSpace cornerCS(65, -90, 16, 32);
    collidingSpaces.push_back(cornerCS);

    bn::sprite_ptr futon = bn::sprite_items::futon.create_sprite(60, -55);
    futon.set_camera(camera);
    bn::vector<Dialogue, 2> futonD;
    Dialogue futonD1("The fold out futon - unfortunate guests", "find themselves resting here.");
    Dialogue futonD2("But it's also a place for late night talks", "and movie nights.");
    futonD.push_back(futonD1);
    futonD.push_back(futonD2);
    Interactable futonI(65, -50, 23, 45, futonD);
    interactables.push_back(futonI);

    bn::sprite_ptr floormat = bn::sprite_items::floormat.create_sprite(-35, -103);
    floormat.set_camera(camera);

    bn::sprite_ptr bean = bn::sprite_items::bean.create_sprite(30, -118);
    bean.set_camera(camera);
    bn::vector<Dialogue, 2> beanD;
    Dialogue beanD1("This is one comfy-ass beanbag.", "Naps may be accidentally extended here.");
    beanD.push_back(beanD1);
    Interactable beanI(30,-118, 35, 32, beanD);
    interactables.push_back(beanI);



    //PLAYER
    bn::sprite_ptr psprite = bn::sprite_items::psprite.create_sprite(0, 20);

    //ITEMS IN FRONT OF PLAYER
    bn::sprite_ptr printer = bn::sprite_items::printer.create_sprite(-45, 33);
    printer.set_camera(camera);
    bn::vector<Dialogue, 2> printerD;
    Dialogue printerD1("The Shift 3D printer! It's been used", "to make some of the coolest things.");
    Dialogue printerD2("But it's also been used to make", "some of the dumbest things.");
    printerD.push_back(printerD1);
    printerD.push_back(printerD2);
    Interactable printerI(-45, 42, 32, 22, printerD);
    interactables.push_back(printerI);


    bn::sprite_text_generator text_generator(common::variable_8x8_sprite_font);

    bn::vector<bn::sprite_ptr, 64> text_sprites;

    bn::regular_bg_ptr bg = bn::regular_bg_items::rug.create_bg(0, 0);
    //TEXT BOX
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

    text_generator.set_palette_item(bn::sprite_items::textl.palette_item());


    bg.set_camera(camera);
    psprite.set_camera(camera);

    bn::window outside_window = bn::window::outside();
    outside_window.set_show_bg(bg, false);

    bn::rect_window entry_window = bn::rect_window::internal();
    entry_window.set_boundaries(-120, -75, 50, 75);
    entry_window.set_camera(camera);


    Player player(psprite, 0, 20, 14, 20, camera);
    player.spriteChange(3);

    int framesWalked = 45;

    while(true)
    {
        bn::core::update();

        int x = player.getPositionX();
        int y = player.getPositionY();

        bool canMove = true;
        player.autoInteracted = false;

        //checking player movement with collidable objects

        if( bn::keypad::left_held() )
        {
            //for every interactable object
            for(int i = 0; i < interactables.size(); i++){
                //if the player is colliding with the interactable object
                if(AABB(x - 1, y + 7, player.getWidth(), player.getHeight() - 16, interactables[i].getX(), interactables[i].getY(), interactables[i].getWidth(), interactables[i].getHeight())){
                    //set player's collided text to the interactable object's collided text
                    player.setDialogues(interactables[i].getDialogues());
                    if(interactables[i]._auto){
                        player.autoInteracted = true;
                    }
                    if(interactables[i]._newScene != -1){
                        return interactables[i]._newScene;
                    }
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
                framesWalked++;
                player.moveRequest(x - 1, y);
                player.clearText();
            }
        }
        else if( bn::keypad::right_held() )
        {
            for(int i = 0; i < interactables.size(); i++){
                if(AABB(x + 1, y + 7, player.getWidth(), player.getHeight() - 16, interactables[i].getX(), interactables[i].getY(), interactables[i].getWidth(), interactables[i].getHeight())){
                    player.setDialogues(interactables[i].getDialogues());
                    if(interactables[i]._auto){
                        player.autoInteracted = true;
                    }
                    if(interactables[i]._newScene != -1){
                        return interactables[i]._newScene;
                    }
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
                framesWalked++;
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
                    if(interactables[i]._auto){
                        player.autoInteracted = true;
                    }
                    if(interactables[i]._newScene != -1){
                        return interactables[i]._newScene;
                    }
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
                framesWalked++;
                player.moveRequest(x, y - 1);
                player.clearText();
            }
        }
        else if( bn::keypad::down_held() )
        {
            for(int i = 0; i < interactables.size(); i++){
                if(AABB(x, y + 8, player.getWidth(), player.getHeight() - 16, interactables[i].getX(), interactables[i].getY(), interactables[i].getWidth(), interactables[i].getHeight())){
                    player.setDialogues(interactables[i].getDialogues());
                    if(interactables[i]._auto){
                        player.autoInteracted = true;
                    }
                    if(interactables[i]._newScene != -1){
                        return interactables[i]._newScene;
                    }
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
                framesWalked++;
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
        else{
            if(framesWalked >= 20){
                bn::sound_items::walk.play();
                framesWalked = 0;
            }
        } 
            

        bn::vector<Dialogue, 2> dialogues = player.getDialogues();

        //checking player interaction with collidable objects
        if( (bn::keypad::a_pressed() && !dialogues.empty()) || player.autoInteracted)
        {
            bn::sound_items::click.play();
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
    
    int player_x = 45;
    int player_y = 30;

    int scene = 0;

    while(true){
        switch(scene){
            case 0:
                scene = entryway(player_x, player_y);
                player_x = 5;
                player_y = 0;
                break;
            case 1:
                scene = attic();
                break;
            default:
                break;
        }

    }

}
