#include <Arcanum/Graphics/Sprite.hpp>

using namespace arcanum::graphics;

void Sprite::append(std::shared_ptr<Image> image)
{
	mImages.push_back(image);
}

std::shared_ptr<Image> Sprite::getImage(size_t index)
{
	return mImages.at(index);
}

std::shared_ptr<Image> Sprite::single()
{
	return getImage(0);
}

size_t Sprite::getFrames()
{
	return mImages.size();
}
