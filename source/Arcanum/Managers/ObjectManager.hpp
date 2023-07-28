#ifndef ENGINE_MANAGERS_OBJECT_MANAGER_HPP
#define ENGINE_MANAGERS_OBJECT_MANAGER_HPP

#include <Arcanum/Managers/SpriteManager.hpp>
#include <Arcanum/Objects/Scenery.hpp>

namespace arcanum
{
    namespace managers
    {
        class ObjectManager
        {
        public:
            ObjectManager(SpriteManager * spriteManager);
            objects::Scenery* newScenery(const std::string& path);
            void deleteScenery(objects::Scenery* value);
        private:
            SpriteManager* mSpriteManager;
        };
    }
}

#endif
