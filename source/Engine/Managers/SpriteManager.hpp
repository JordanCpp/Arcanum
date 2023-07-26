#ifndef _Engine_Managers_SpriteManager_hpp_
#define _Engine_Managers_SpriteManager_hpp_

#include <Engine/Graphics/Sprite.hpp>
#include <Engine/Managers/FileManager.hpp>
#include <Engine/Loaders/ArtLoader.hpp>
#include <unordered_map>
#include <memory>

namespace engine
{
    namespace managers
    {
        class SpriteManager
        {
        public:
            SpriteManager(graphics::Canvas* canvas, managers::FileManager* fileManager, loaders::ArtLoader * artLoader);
            std::shared_ptr<graphics::Sprite> getSprite(const std::string& path);
        private:
            graphics::Canvas* mCanvas;
            managers::FileManager* mFileManager;
            loaders::ArtLoader* mArtLoader;
            std::unordered_map<std::string, std::shared_ptr<graphics::Sprite>> mSprites;
        };
    }
}

#endif
