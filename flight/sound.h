#ifndef SOUND_H_INCLUDED
#define SOUND_H_INCLUDED

#include<SFML/Audio.hpp>
#include<Windows.h>
#include<iostream>
using namespace std;
using namespace sf;

 Music bgm;
 Sound  enemy_down,player_down;

void load_all_sound()
{
    bool FILE_MISSING=false;
    SoundBuffer _enemy_down,_player_down;
    if(!bgm.openFromFile("sound/game_music.ogg"))
        FILE_MISSING=true;
     if(!_enemy_down.loadFromFile("sound/enemy_down.ogg"))
        FILE_MISSING=true;
        else enemy_down.setBuffer(_enemy_down);

    if(!_player_down.loadFromFile("sound/player_down.ogg"))
        FILE_MISSING=true;
        else player_down.setBuffer(_player_down);
    if(FILE_MISSING)
        {MessageBox(0,TEXT("file missing"),"Sound",0);
        exit(-1);}
}



#endif // SOUND_H_INCLUDED
