#include <Arcanum/Managers/ObjectManager.hpp>

using namespace arcanum::objects;
using namespace arcanum::managers;

ObjectManager::ObjectManager(SpriteManager* spriteManager) :
	mSpriteManager(spriteManager)
{
}

Scenery* ObjectManager::newScenery(const std::string& path)
{
	Scenery* result = new Scenery;

	result->setSprite(mSpriteManager->getSprite(path));

	return result;
}

void ObjectManager::deleteScenery(Scenery* value)
{
	delete value;
}
