#include <Arcanum/Managers/SpriteManager.hpp>

using namespace arcanum::managers;
using namespace arcanum::graphics;
using namespace arcanum::readers;
using namespace arcanum::loaders;

SpriteManager::SpriteManager(Render* render, FileManager* fileManager, ArtLoader* artLoader) :
	mRender(render),
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

            auto image = std::make_shared<Image>(mRender, mArtLoader->getPixels(), mArtLoader->getSize(), mArtLoader->getOffset(), mArtLoader->getDelta());

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
