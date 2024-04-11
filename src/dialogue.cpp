
#include <bn_string.h>

class Dialogue{
    private:
    bn::string<50> _text;
    bn::string<50> _text2;

    public:
    Dialogue(bn::string<50> text, bn::string<50> text2) : _text(text), _text2(text2) {}

    bn::string<50> getText(){
        return _text;
    }

    bn::string<50> getText2(){
        return _text2;
    }
};