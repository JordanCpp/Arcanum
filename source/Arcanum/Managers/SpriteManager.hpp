#ifndef ENGINE_MANAGERS_SPRITEMANAGER_HPP
#define ENGINE_MANAGERS_SPRITEMANAGER_HPP

#include <Arcanum/Graphics/Sprite.hpp>
#include <Arcanum/Managers/FileManager.hpp>
#include <Arcanum/Loaders/ArtLoader.hpp>
#include <unordered_map>
#include <memory>

namespace arcanum
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
            FileManager* mFileManager;
            loaders::ArtLoader* mArtLoader;
            std::unordered_map<std::string, std::shared_ptr<graphics::Sprite>> mSprites;
        };
    }
}

#endif
