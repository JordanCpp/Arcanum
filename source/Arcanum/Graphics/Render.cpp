#include <Arcanum/Graphics/Render.hpp>
#include <stdexcept>

using namespace arcanum::math;
using namespace arcanum::graphics;

Render::Render(Window* window) :
    mWindow(window)
{
    mRender = SDL_CreateRenderer(mWindow->getWindow(), -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    if (!mRender)
        throw std::runtime_error(SDL_GetError());

    SDL_SetHint(SDL_HINT_RENDER_BATCHING, "1");
}

Render::~Render()
{
    SDL_DestroyRenderer(mRender);
}

SDL_Renderer* Render::getRender()
{
    return mRender;
}

const Point Render::getSize()
{
    return mWindow->getSize();
}

void Render::Clear()
{
    SDL_RenderClear(mRender);
}

void Render::Draw()
{
    SDL_RenderPresent(mRender);
}
