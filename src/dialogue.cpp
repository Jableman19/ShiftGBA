
#include <bn_string.h>

class Dialogue{
    private:
    bn::string<128> _text;
    bn::string<128> _text2;

    public:
    Dialogue(bn::string<128> text, bn::string<128> text2) : _text(text), _text2(text2) {}

    bn::string<128> getText(){
        return _text;
    }

    bn::string<128> getText2(){
        return _text2;
    }
};