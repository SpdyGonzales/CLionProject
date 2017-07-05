//
// Created by Erik Holm on 2017-07-03.
//
#include <SDL2/SDL.h>

#include "../headers/graphics.h"

Graphics::Graphics() {
    SDL_CreateWindowAndRenderer(640, 480, 0, &this->_window, &this->_renderer);
    SDL_SetWindowTitle(this->_window, "SomGame");
}

Graphics::~Graphics() {
    SDL_DestroyWindow(this->_window);
}