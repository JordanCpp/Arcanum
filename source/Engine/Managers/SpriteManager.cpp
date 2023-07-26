#include <Engine/Managers/SpriteManager.hpp>

using namespace engine::managers;
using namespace engine::graphics;
using namespace engine::readers;
using namespace engine::loaders;

SpriteManager::SpriteManager(Canvas* canvas, FileManager* fileManager, ArtLoader* artLoader) :
	mCanvas(canvas),
	mFileManager(fileManager),
	mArtLoader(artLoader)
{
}

std::shared_ptr<Sprite> SpriteManager::getSprite(const std::string& path)
{
	auto i = mSprites.find(path);

	std::shared_ptr<Sprite> result = nullptr;

    if (i == mSprites.end())
    {
        FileReader reader;
        reader.open(mFileManager->getFile(path));

        mArtLoader->Load(&reader);

        result = std::make_shared<Sprite>();

        for (size_t i = 0; i < mArtLoader->getFrames(); i++)
        {
            mArtLoader->frame(i);

            Image* image = new Image(mCanvas, mArtLoader->getPixels(), mArtLoader->getSize(), mArtLoader->getOffset(), mArtLoader->getDelta());

            result->append(image);
        }

        mSprites.emplace(path, result);
    }
    else
    {
        result = i->second;
    }

    return result;
}
