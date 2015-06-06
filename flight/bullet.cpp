#include"bullet.h"
#include<Windows.h>
#define MOVE_PIX_BULLET 0.7
extern RenderWindow window;

Bullet::Bullet(int a)
{
    if(0==a)
       {

         if(!bullet_texture.loadFromFile("image/shoot.png",IntRect(69,78,10,22)))
         {
            MessageBox(0,TEXT("file missing"),"Bullet",0);
            exit(-1);
         }

       }
       else
       {
           if(!bullet_texture.loadFromFile("image/shoot.png",IntRect(1002,990,10,22)))
         {
            MessageBox(0,TEXT("file missing"),"Bullet",0);
            exit(-1);
         }
        }
        bullet_sprite=new Sprite(bullet_texture);
}

Bullet::~Bullet()
{
    delete bullet_sprite;
}
void  Bullet::fire(float x,float y)
{
    x_bullet=x+51;
    y_bullet=y;
    drawbullet();
}


void  Bullet::drawbullet()
{
    bullet_sprite->setPosition(x_bullet,y_bullet);
    window.draw(*bullet_sprite);
}

int  Bullet::player_refresh()
{
    this->x_bullet-=MOVE_PIX_BULLET;

    if(this->x_bullet<0)
        return 0;
        else drawbullet();
    return 1;
}
