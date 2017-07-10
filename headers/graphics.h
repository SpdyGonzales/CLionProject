

#ifndef CLIONPROJECT_GRAPHICS_H
#define CLIONPROJECT_GRAPHICS_H

struct SDL_Window;
struct SDL_Renderer;

class Graphics{

public:
    Graphics();
    ~Graphics();

private:
    SDL_Window* _window;
    SDL_Renderer* _renderer;

};

#endif //CLIONPROJECT_GRAPHICS_H
