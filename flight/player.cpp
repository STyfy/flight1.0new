#include"player.h"
#include<Windows.h>
#define MOVE_PIX_PLAYER 10

extern RenderWindow window;

 Player::Player()
{
  if(!player_texture.loadFromFile("image/shoot.png",IntRect(0,100,103,133)))
    {
            MessageBox(0,TEXT("file missing"),"Player",0);
            exit(-1);
    }
  player_sprite=new Sprite(player_texture);
  x_player=187;
  y_player=467;
  drawplayer();
  for(int i=0;i<100;i++)
    bullet_alive[i]=0;
}

void  Player::drawplayer()
{
    player_sprite->setPosition(x_player,y_player);
    window.draw(*player_sprite);
}


void  Player::moveup()
{
    if(y_player>=MOVE_PIX_PLAYER)
        y_player-=MOVE_PIX_PLAYER;
    else y_player=0;
    drawplayer();
}
void  Player::movedown()
{
    if(y_player<=600-MOVE_PIX_PLAYER-133)
        y_player+=MOVE_PIX_PLAYER;
    else y_player=600-133;
    drawplayer();
}
void  Player::moveleft()
{
  if(x_player>=MOVE_PIX_PLAYER)
    x_player-=MOVE_PIX_PLAYER;
  else x_player=0;
  drawplayer();
}
void  Player::moveright()
{
    if(x_player<=480-MOVE_PIX_PLAYER-103)
        x_player+=MOVE_PIX_PLAYER;
    else  x_player=480-103;
    drawplayer();
}


float Player::get_x()
{
    return x_player;
}
float Player::get_y()
{
    return y_player;
}


void  Player::gun()
{
    for(int i=0;i<100;i++)
        if(0==bullet_alive[i])
    {
        bullet_count[i]=new Bullet(0);
        bullet_count[i]->fire(x_player,y_player);
        break;
    }
}


void   Player::bullet_refresh()
{
    for(int i=0;i<100;i++)
        {
            if(bullet_alive[i])
            bullet_alive[i]=bullet_count[i]->player_refresh();
        }

}
