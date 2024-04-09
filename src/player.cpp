//player class
#include "interactable.cpp"
#include "bn_sprite_text_generator.h"

class Player {

    private:
        bn::sprite_ptr _sprite;
        int _x;
        int _y;
        int _width;
        int _height;
        int _lastSprite = 0;
        bn::camera_ptr _camera;
        bn::string<128> _collidedText;

    public:

        int spriteChangeSpeed = 10;

        Player(bn::sprite_ptr sprite, int x, int y, int width, int height, bn::camera_ptr camera) : _sprite(sprite), _x(x), _y(y), _width(width), _height(height), _camera(camera) {
            _sprite.set_position(_x, _y);
        }

        void moveRequest(int x, int y, int dir){
            //for dir, 0 is right, 1 is down, 2 is left, 3 is up
            _sprite.set_position(x, y);
            playerSetPosition(x, y);
            _camera.set_position(x, y);
            switch (dir)
            {
            case 0:
                if(_lastSprite == spriteChangeSpeed ){
                    _sprite.set_tiles(bn::sprite_items::basic2.tiles_item().create_tiles(4));
                    _lastSprite = 0;
                }
                else{
                    _sprite.set_tiles(bn::sprite_items::basic2.tiles_item().create_tiles(0));
                    _lastSprite++;
                }
                break;
            case 1:
                if(_lastSprite == spriteChangeSpeed ){
                    _sprite.set_tiles(bn::sprite_items::basic2.tiles_item().create_tiles(5));
                    _lastSprite = 1;
                }
                else{
                    _sprite.set_tiles(bn::sprite_items::basic2.tiles_item().create_tiles(1));
                    _lastSprite++;
                }
                break;
            case 2:
                if(_lastSprite == spriteChangeSpeed ){
                    _sprite.set_tiles(bn::sprite_items::basic2.tiles_item().create_tiles(6));
                    _lastSprite = 2;
                }
                else{
                    _sprite.set_tiles(bn::sprite_items::basic2.tiles_item().create_tiles(2));
                    _lastSprite++;
                }
                break;
            case 3:
                if(_lastSprite == spriteChangeSpeed ){
                    _sprite.set_tiles(bn::sprite_items::basic2.tiles_item().create_tiles(7));
                    _lastSprite = 3;
                }
                else{
                    _sprite.set_tiles(bn::sprite_items::basic2.tiles_item().create_tiles(3));
                    _lastSprite++;
                }
                break;
            default:
                break;
            }

        }

        void clearText(){
            _collidedText.clear();
        }

        int getLastSprite(){
            return _lastSprite;
        }

        void setCollidedText(bn::string<128> text){
            _collidedText = text;
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

        bn::string<128> getCollidedText(){
            return _collidedText;
        }

        void playerSetPosition(int x, int y){
            _x = x;
            _y = y;
            _sprite.set_position(_x, _y);
        }

};