#include "bn_core.h"
#include "bn_sprites.h"
#include <bn_sprite_ptr.h>
#include <bn_sprite_tiles_ptr.h>
#include <bn_keypad.h>
#include <bn_camera_ptr.h>
#include <bn_vector.h>
#include "dialogue.cpp"

class Interactable {
    private:
        int _x;
        int _y;
        int _width;
        int _height;
        bn::vector<Dialogue, 2> _dialogues;

    public:

        int _newScene = -1;
        bool _auto = false;
        Interactable(int x, int y, int width, int height,
         bn::vector<Dialogue, 2> dialogues) : _x(x), _y(y), _width(width), _height(height),
           _dialogues(dialogues) {}

        //get collided texts
        bn::vector<Dialogue, 2> getDialogues(){
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