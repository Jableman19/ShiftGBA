#include "bn_core.h"
#include <bn_sprite_ptr.h>
#include <bn_sprite_ptr.h>
#include "bn_sprites.h"
#include <bn_sprite_tiles.h>
#include <bn_sprite_ptr.h>
#include <bn_sprite_tiles_ptr.h>
#include "bn_display.h"
#include <bn_time.h>
#include <bn_keypad.h>
#include <bn_camera_ptr.h>
#include <bn_string.h>
#include <bn_vector.h>
#include "dialogue.cpp"

class Interactable {
    private:
        bn::sprite_ptr _sprite;
        int _x;
        int _y;
        int _width;
        int _height;
        bn::vector<Dialogue, 5> _dialogues;

    public:

        Interactable(bn::sprite_ptr sprite, int x, int y, int width, int height,
         bn::vector<Dialogue, 5> dialogues) : _sprite(sprite), _x(x), _y(y), _width(width), _height(height),
           _dialogues(dialogues) {
            _sprite.set_position(_x, _y);
        }

        //get collided texts
        bn::vector<Dialogue, 5> getDialogues(){
            return _dialogues;
        }

        int getX(){
            return _x;
        }

        int getY(){
            return _y;
        }

        int getWidth(){
            return _width;
        }

        int getHeight(){
            return _height;
        }
};