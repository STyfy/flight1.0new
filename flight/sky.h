#ifndef SKY_H_INCLUDED
#define SKY_H_INCLUDED

#include<SFML/Graphics.hpp>
using namespace sf;
class Sky
{
private:
    Texture sky_texture;
    Sprite sky_sprite;
public:
    Sky();
    void drawsky();
};


#endif // SKY_H_INCLUDED
