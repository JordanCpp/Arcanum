#include <Engine/Graphics/Sprite.hpp>

using namespace Engine::Graphics;

Sprite::~Sprite()
{
	for (size_t i = 0; i < Images.size(); i++)
		delete Images[i];
}
void Sprite::append(Image* image)
{
	Images.push_back(image);
}

Image* Sprite::getImage(size_t index)
{
	return Images[index];
}

Image* Sprite::single()
{
	return getImage(0);
}

size_t Sprite::getFrames()
{
	return Images.size();
}
