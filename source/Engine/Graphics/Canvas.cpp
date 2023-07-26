#include <Engine/Graphics/Canvas.hpp>
#include <iostream>
#include <stdexcept>

using namespace engine::math;
using namespace engine::graphics;

Canvas::Canvas(const Point& size, const std::string& title) :
    mRunning(true),
    mWindow(nullptr),
    mRender(nullptr)
{
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
        throw std::runtime_error(SDL_GetError());

    mWindow = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, (int)size.X, (int)size.Y, SDL_WINDOW_SHOWN);

    if (!mWindow)
        throw std::runtime_error(SDL_GetError());

    mRender = SDL_CreateRenderer(mWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    if (!mRender)
        throw std::runtime_error(SDL_GetError());
}

Canvas::~Canvas()
{
    SDL_DestroyRenderer(mRender);
    SDL_DestroyWindow(mWindow);
    SDL_Quit();
}

const Point Canvas::getSize()
{
    int w = 0;
    int h = 0;

    SDL_GetWindowSize(mWindow, &w, &h);

    mSize = Point(w, h);

    return mSize;
}

SDL_Renderer* Canvas::getRender()
{
    return mRender;
}

bool Canvas::getEvent(SDL_Event& dest)
{
    SDL_Event event = { 0 };

    if (mRunning)
    {
        SDL_RenderPresent(mRender);
        SDL_SetRenderDrawColor(mRender, 0, 0, 0, 255);
        SDL_RenderClear(mRender);

        SDL_PollEvent(&event);

        dest = event;

        if (event.type == SDL_QUIT)
            mRunning = false;
    }

    return mRunning;
}
