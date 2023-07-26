#include <Engine/Graphics/Sprite.hpp>

using namespace Engine::Graphics;

Sprite::~Sprite()
{
	for (size_t i = 0; i < mImages.size(); i++)
		delete mImages[i];
}
void Sprite::append(Image* image)
{
	mImages.push_back(image);
}

Image* Sprite::getImage(size_t index)
{
	return mImages[index];
}

Image* Sprite::single()
{
	return getImage(0);
}

size_t Sprite::getFrames()
{
	return mImages.size();
}
