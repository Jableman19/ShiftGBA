//player class
#include "interactable.cpp"
#include "bn_sprite_text_generator.h"
#include "bn_sprite_items_psprite.h"

class Player {

    private:
        bn::sprite_ptr _sprite;
        int _x;
        int _y;
        int _width;
        int _height;
        int _lastSprite = 0;
        int _lastDir = 0;
        bn::camera_ptr _camera;
        bn::string<128> _collidedText1;
        bn::string<128> _collidedText2;

    public:

        int spriteChangeSpeed = 28;

        Player(bn::sprite_ptr sprite, int x, int y, int width, int height, bn::camera_ptr camera) : _sprite(sprite), _x(x), _y(y), _width(width), _height(height), _camera(camera) {
            _sprite.set_position(_x, _y);
        }

        void standing(){
            switch(_lastDir){
                case 0:
                    _sprite.set_tiles(bn::sprite_items::psprite.tiles_item().create_tiles(1));
                    _sprite.set_horizontal_flip(true);
                    break;
                case 1:
                    _sprite.set_tiles(bn::sprite_items::psprite.tiles_item().create_tiles(0));
                    _sprite.set_horizontal_flip(false);
                    break;
                case 2:
                    _sprite.set_tiles(bn::sprite_items::psprite.tiles_item().create_tiles(1));
                    _sprite.set_horizontal_flip(false);
                    break;
                case 3:
                    _sprite.set_tiles(bn::sprite_items::psprite.tiles_item().create_tiles(2));
                    _sprite.set_horizontal_flip(false);
                    break;
                default:
                    break;
            }
        }

        void spriteChange(int dir){
            switch (dir)
            {
            case 0:
                _lastDir = 0;
                if(_lastSprite < spriteChangeSpeed / 4){
                    _sprite.set_tiles(bn::sprite_items::psprite.tiles_item().create_tiles(4));
                    _sprite.set_horizontal_flip(true);
                    _lastSprite++;
                }
                else if(_lastSprite < spriteChangeSpeed /2){
                    _sprite.set_tiles(bn::sprite_items::psprite.tiles_item().create_tiles(1));
                    _sprite.set_horizontal_flip(true);
                    _lastSprite++;
                }
                else if(_lastSprite < spriteChangeSpeed * 3 / 4){
                    _sprite.set_tiles(bn::sprite_items::psprite.tiles_item().create_tiles(5));
                    _sprite.set_horizontal_flip(true);
                    _lastSprite++;
                }
                else if(_lastSprite <= spriteChangeSpeed){
                    _sprite.set_tiles(bn::sprite_items::psprite.tiles_item().create_tiles(1));
                    _sprite.set_horizontal_flip(true);
                    if(_lastSprite == spriteChangeSpeed){
                        _lastSprite = 0;
                    }
                    else{
                        _lastSprite++;
                    }
                }
                break;
            case 1:
                _lastDir = 1;
                if(_lastSprite < spriteChangeSpeed / 4){
                    _sprite.set_tiles(bn::sprite_items::psprite.tiles_item().create_tiles(3));
                    _sprite.set_horizontal_flip(true);
                    _lastSprite++;
                }
                else if(_lastSprite < spriteChangeSpeed / 2){
                    _sprite.set_tiles(bn::sprite_items::psprite.tiles_item().create_tiles(0));
                    _sprite.set_horizontal_flip(false);
                    _lastSprite++;
                }
                else if(_lastSprite < spriteChangeSpeed * 3 / 4){
                    _sprite.set_tiles(bn::sprite_items::psprite.tiles_item().create_tiles(3));
                    _sprite.set_horizontal_flip(false);
                    _lastSprite++;
                }
                else if(_lastSprite <= spriteChangeSpeed){
                    _sprite.set_tiles(bn::sprite_items::psprite.tiles_item().create_tiles(0));
                    _sprite.set_horizontal_flip(false);
                    if(_lastSprite == spriteChangeSpeed){
                        _lastSprite = 0;
                    }
                    else{
                        _lastSprite++;
                    }
                }
                break;
            case 2:
                _lastDir = 2;
                if(_lastSprite < spriteChangeSpeed / 4){
                    _sprite.set_tiles(bn::sprite_items::psprite.tiles_item().create_tiles(4));
                    _sprite.set_horizontal_flip(false);
                    _lastSprite++;
                }
                else if(_lastSprite < spriteChangeSpeed /2){
                    _sprite.set_tiles(bn::sprite_items::psprite.tiles_item().create_tiles(1));
                    _sprite.set_horizontal_flip(false);
                    _lastSprite++;
                }
                else if(_lastSprite < spriteChangeSpeed * 3 / 4){
                    _sprite.set_tiles(bn::sprite_items::psprite.tiles_item().create_tiles(5));
                    _sprite.set_horizontal_flip(false);
                    _lastSprite++;
                }
                else if(_lastSprite <= spriteChangeSpeed){
                    _sprite.set_tiles(bn::sprite_items::psprite.tiles_item().create_tiles(1));
                    _sprite.set_horizontal_flip(false);
                    if(_lastSprite == spriteChangeSpeed){
                        _lastSprite = 0;
                    }
                    else{
                        _lastSprite++;
                    }
                }
                break;
            case 3:
                _lastDir = 3;
                if(_lastSprite < spriteChangeSpeed / 4){
                    _sprite.set_tiles(bn::sprite_items::psprite.tiles_item().create_tiles(6));
                    _sprite.set_horizontal_flip(true);
                    _lastSprite++;
                }
                else if(_lastSprite < spriteChangeSpeed / 2){
                    _sprite.set_tiles(bn::sprite_items::psprite.tiles_item().create_tiles(2));
                    _sprite.set_horizontal_flip(false);
                    _lastSprite++;
                }
                else if(_lastSprite < spriteChangeSpeed * 3 / 4){
                    _sprite.set_tiles(bn::sprite_items::psprite.tiles_item().create_tiles(6));
                    _sprite.set_horizontal_flip(false);
                    _lastSprite++;
                }
                else if(_lastSprite <= spriteChangeSpeed){
                    _sprite.set_tiles(bn::sprite_items::psprite.tiles_item().create_tiles(2));
                    _sprite.set_horizontal_flip(false);
                    if(_lastSprite == spriteChangeSpeed){
                        _lastSprite = 0;
                    }
                    else{
                        _lastSprite++;
                    }
                }
                break;
            default:
                break;
            }
        }

        void moveRequest(int x, int y){
            //for dir, 0 is right, 1 is down, 2 is left, 3 is up
            playerSetPosition(x, y);
        }

        void clearText(){
            _collidedText1.clear();
            _collidedText2.clear();
        }

        int getLastSprite(){
            return _lastSprite;
        }

        void setCollidedText1(bn::string<128> text){
            _collidedText1 = text;
        }

        void setCollidedText2(bn::string<128> text){
            _collidedText2 = text;
        }

        int getPositionX(){
            return _x;
        }

        int getPositionY(){
            return _y;
        }

        int getWidth(){
            return _width;
        }

        int getHeight(){
            return _height;
        }

        bn::sprite_ptr getSprite(){
            return _sprite;
        }

        bn::string<128> getCollidedText1(){
            return _collidedText1;
        }

        bn::string<128> getCollidedText2(){
            return _collidedText2;
        }

        void playerSetPosition(int x, int y){
            _x = x;
            _y = y;
            _sprite.set_position(_x, _y);
            _camera.set_position(_x, _y);
        }

};