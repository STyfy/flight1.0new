#include"sky.h"
#include<Windows.h>
extern  RenderWindow window;

Sky::Sky()
{
    if(!sky_texture.loadFromFile("image/background.png"))
    {
        MessageBox(0,TEXT("file missing"),"Image",0);
        exit(-1);
        }
    sky_sprite.setTexture(sky_texture);
    sky_sprite.setTextureRect(IntRect(0,0,480,600));

}

void Sky::drawsky()
{
    window.draw(sky_sprite);
}
