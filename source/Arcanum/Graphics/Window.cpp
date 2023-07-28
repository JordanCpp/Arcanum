#include <Arcanum/Graphics/Window.hpp>
#include <stdexcept>

using namespace arcanum::math;
using namespace arcanum::graphics;

Window::Window(const Point& size, const std::string& title) :
    mRunning(true),
    mWindow(nullptr)
{
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
        throw std::runtime_error(SDL_GetError());

    mWindow = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, (int)size.X, (int)size.Y, SDL_WINDOW_SHOWN);

    if (!mWindow)
        throw std::runtime_error(SDL_GetError());
}

Window::~Window()
{
    SDL_DestroyWindow(mWindow);
    SDL_Quit();
}

const Point Window::getSize()
{
    int w = 0;
    int h = 0;

    SDL_GetWindowSize(mWindow, &w, &h);

    mSize = Point(w, h);

    return mSize;
}

SDL_Window* Window::getWindow()
{
    return mWindow;
}

bool Window::getEvent(SDL_Event& dest)
{
    SDL_Event event = { 0 };

    if (mRunning)
    {
        SDL_PollEvent(&event);

        dest = event;

        if (event.type == SDL_QUIT)
            mRunning = false;
    }

    return mRunning;
}
