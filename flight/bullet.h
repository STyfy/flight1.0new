#ifndef BULLET_H_INCLUDED
#define BULLET_H_INCLUDED
#include<SFML/Graphics.hpp>
using namespace sf;
class Bullet
{
private:
    float x_bullet,y_bullet;
    Texture  bullet_texture;
    Sprite   *bullet_sprite;
public:
    Bullet(int a);
    void fire(float x,float y);
    void refresh();
    void drawbullet();
    int  player_refresh();
    ~Bullet();
};

#endif // BULLET_H_INCLUDED
