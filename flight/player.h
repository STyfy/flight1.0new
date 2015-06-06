#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED


#include"bullet.h"
class  Player
{
private:
    Texture player_texture;
    Sprite  *player_sprite;
    float x_player,y_player;
    Bullet *bullet_count[100];
    int  bullet_alive[100];
public:
    Player();
    void drawplayer();
    void moveup();
    void moveright();
    void moveleft();
    void movedown();
    float get_x();
    float get_y();
    void  gun();
    void  bullet_refresh();
};


#endif // PLAYER_H_INCLUDED
