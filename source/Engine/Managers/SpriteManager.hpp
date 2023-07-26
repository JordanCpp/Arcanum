#ifndef _Engine_Managers_SpriteManager_hpp_
#define _Engine_Managers_SpriteManager_hpp_

#include <Engine/Graphics/Sprite.hpp>
#include <Engine/Managers/FileManager.hpp>
#include <Engine/Loaders/ArtLoader.hpp>
#include <unordered_map>
#include <memory>

namespace Engine
{
    namespace Managers
    {
        class SpriteManager
        {
        public:
            SpriteManager(Graphics::Canvas* canvas, Managers::FileManager* fileManager, Loaders::ArtLoader * artLoader);
            std::shared_ptr<Graphics::Sprite> getSprite(const std::string& path);
        private:
            Graphics::Canvas* mCanvas;
            Managers::FileManager* mFileManager;
            Loaders::ArtLoader* mArtLoader;
            std::unordered_map<std::string, std::shared_ptr<Graphics::Sprite>> mSprites;
        };
    }
}

#endif
