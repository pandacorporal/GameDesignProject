#ifndef GAMEVIEWPLAYER_H
#define GAMEVIEWPLAYER_H

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Gun.h"

using namespace std;

class GameViewPlayer
{

private:
    float timePassed;

public:
    sf::Font gameFont;

    sf::RenderWindow gameWindow;
    sf::RectangleShape background;
    sf::CircleShape sky;
    sf::Texture gameImage;
    sf::Texture playerImage;
    sf::Texture gameSky;
    sf::SoundBuffer gameSound;
    sf::Sound gameMusic;
    sf::Event Event;
    float* currentPlayer;

    GameViewPlayer();
    bool playerViewIsOpen();
    void movePlayer(float timePassed);
    void moveEnemy(float timePassed);
    void updateGame(void);
    void deleteObjects(void);


};

#endif
