#include <iostream>


#include"sound.h"
#include"sky.h"
#include"player.h"

using namespace sf;
using namespace std;
RenderWindow  window(VideoMode(480,600),"fighting");
int main()
{


 Sky sky;
 load_all_sound();

 bgm.play();
 Player  player;
 while (window.isOpen())
    {
        window.clear();
        sky.drawsky();

       Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
            if(event.type==Event::KeyPressed&& event.key.code == Keyboard::Up)
                player.moveup();
            if(event.type==Event::KeyPressed&& event.key.code == Keyboard::Down)
                player.movedown();
            if(event.type==Event::KeyPressed&& event.key.code == Keyboard::Left)
                player.moveleft();
            if(event.type==Event::KeyPressed&& event.key.code == Keyboard::Right)
                player.moveright();
            if(event.type==Event::KeyPressed&& event.key.code == Keyboard::Space)
                player.gun();
        }
        player.bullet_refresh();
        window.display();
    }


    return 0;

}
