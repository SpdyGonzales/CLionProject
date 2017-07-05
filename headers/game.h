//
// Created by Erik Holm on 2017-07-03.
//

#ifndef CLIONPROJECT_GAME_H
#define CLIONPROJECT_GAME_H

class Graphics;

class Game{
public:
    Game();
    ~Game();

private:
    void gameLoop();
    void draw(Graphics &graphics);
    void update(float elapsedTime);
};
#endif //CLIONPROJECT_GAME_H
