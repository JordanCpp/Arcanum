#include <Engine/Managers/SpriteManager.hpp>

using namespace Engine::Managers;
using namespace Engine::Graphics;
using namespace Engine::Readers;

SpriteManager::SpriteManager(Graphics::Canvas* canvas, Managers::FileManager* fileManager, Loaders::ArtLoader* artLoader) :
	Canvas(canvas),
	FileManager(fileManager),
	ArtLoader(artLoader)
{
}

std::shared_ptr<Sprite> SpriteManager::getSprite(const std::string& path)
{
	auto i = Sprites.find(path);

	std::shared_ptr<Sprite> result = nullptr;

    if (i == Sprites.end())
    {
        FileReader reader;
        reader.open(FileManager->getFile(path));

        ArtLoader->Load(&reader);

        result = std::make_shared<Sprite>();

        for (size_t i = 0; i < ArtLoader->Frames(); i++)
        {
            ArtLoader->Frame(i);

            Image* image = new Image(Canvas, ArtLoader->Pixels(), ArtLoader->getSize(), ArtLoader->getOffset(), ArtLoader->getDelta());

            result->append(image);
        }

        Sprites.emplace(path, result);
    }
    else
    {
        result = i->second;
    }

    return result;
}
