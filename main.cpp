#include <iostream>
#include <SDL.h>
#include <gl/glew.h>
#include <SDL_opengl.h>


int main(int argc, char *argv[])
{
    int SCREEN_HEIGHT = 480;
    int SCREEN_WIDTH = 640;

    SDL_Window *window = NULL;

    SDL_Surface *screenSurface = NULL;
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        std::cout << "load failed" << std::endl;
    } else
    {
        window = SDL_CreateWindow("Test Project", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH,
                                  SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
        if (window == NULL)
        {
            std::cout << "window create failed" << std::endl;
        } else
        {
            screenSurface = SDL_GetWindowSurface(window);
            SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));
            SDL_UpdateWindowSurface(window);
            SDL_Delay(2000);
        }
    }
    SDL_DestroyWindow(window);
    SDL_Quit();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}