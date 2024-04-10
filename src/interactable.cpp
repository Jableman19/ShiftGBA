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

class Interactable {
    private:
        bn::sprite_ptr _sprite;
        int _x;
        int _y;
        int _width;
        int _height;
        bn::string<128> _collidedText;

    public:

        Interactable(bn::sprite_ptr sprite, int x, int y, int width, int height, bn::string<128> collidedText) : _sprite(sprite), _x(x), _y(y), _width(width), _height(height), _collidedText(collidedText) {
            _sprite.set_position(_x, _y);
        }

        bn::string<128> getCollidedText(){
            return _collidedText;
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