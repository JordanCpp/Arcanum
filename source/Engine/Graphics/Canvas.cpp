#include <Engine/Graphics/Canvas.hpp>
#include <iostream>
#include <exception>

using namespace Engine::Graphics;

Canvas::Canvas(size_t width, size_t heigth, const std::string& title) :
    Running(true),
    Window(nullptr),
    Render(nullptr)
{
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
        throw std::runtime_error(SDL_GetError());

    Window = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, heigth, SDL_WINDOW_SHOWN);

    if (!Window)
        throw std::runtime_error(SDL_GetError());

    Render = SDL_CreateRenderer(Window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    if (!Render)
        throw std::runtime_error(SDL_GetError());
}

Canvas::~Canvas()
{
    SDL_DestroyRenderer(Render);
    SDL_DestroyWindow(Window);
    SDL_Quit();
}

bool Canvas::getEvent(SDL_Event& dest)
{
    SDL_Event event = { 0 };

    if (Running)
    {
        SDL_RenderPresent(Render);
        SDL_SetRenderDrawColor(Render, 0, 0, 0, 255);
        SDL_RenderClear(Render);

        SDL_PollEvent(&event);

        dest = event;

        if (event.type == SDL_QUIT)
            Running = false;
    }

    return Running;
}
