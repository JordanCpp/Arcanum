#include <Arcanum/Graphics/Image.hpp>
#include <stdexcept>

using namespace arcanum::math;
using namespace arcanum::graphics;

Image::Image(graphics::Render* render, uint8_t* pixels, const Point& size, const Point& offset, const Point& delta) :
	mRender(render),
    mSize(size),
    mOffset(offset),
    mDelta(delta)
{
#if SDL_BYTEORDER == SDL_BIG_ENDIAN
    const uint32_t R_MASK = 0xff000000;
    const uint32_t G_MASK = 0x00ff0000;
    const uint32_t B_MASK = 0x0000ff00;
    const uint32_t A_MASK = 0x000000ff;
#else
    const uint32_t R_MASK = 0x000000ff;
    const uint32_t G_MASK = 0x0000ff00;
    const uint32_t B_MASK = 0x00ff0000;
    const uint32_t A_MASK = 0xff000000;
#endif

	SDL_Surface* surface = SDL_CreateRGBSurfaceFrom(pixels, (int)size.X, (int)size.Y, 32, (int)size.X * 4, R_MASK, G_MASK, B_MASK, A_MASK);

    if (!surface)
        throw std::runtime_error(SDL_GetError());
         
	mTexture = SDL_CreateTextureFromSurface(mRender->getRender(), surface);

    if (!mTexture)
        throw std::runtime_error(SDL_GetError());

    SDL_FreeSurface(surface);
}

Image::~Image()
{
	SDL_DestroyTexture(mTexture);
}

SDL_Texture* Image::getTexture()
{
    return mTexture;
}

const Point& Image::getSize()
{
    return mSize;
}

const Point& Image::getOffset()
{
    return mOffset;
}

const Point& Image::getDelta()
{
    return mDelta;
}

void Image::draw(const Point& dstPos, const Point& dstSize)
{
    SDL_Rect rt;

    rt.x = (int)dstPos.X;
    rt.y = (int)dstPos.Y;
    rt.w = (int)dstSize.X;
    rt.h = (int)dstSize.Y;

    SDL_RenderCopy(mRender->getRender(), mTexture, nullptr, &rt);
}

void Image::draw(const Point& pos)
{
    draw(pos, getSize());
}
