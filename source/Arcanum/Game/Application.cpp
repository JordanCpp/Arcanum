#include <Arcanum/Game/Application.hpp>
#include <iostream>

using namespace arcanum::math;
using namespace arcanum::graphics;
using namespace arcanum::game;

Application::Application(Settings* settings) :
	mSettings(settings),
	mCanvas(settings->getWindowSize(), settings->getWindowTitle()),
	mSpriteManager(&mCanvas, &mFileManager, &mArtLoader),
	mMainMenu(&mCanvas)

{
}

Application::~Application()
{
}

void Application::run()
{
	SDL_Event report = { 0 };

	while (mCanvas.getEvent(report))
	{
		mMainMenu.draw();

		mSpriteManager.getSprite("art/scenery/engine.ART")->single()->draw(Point(0, 0));
		mSpriteManager.getSprite("art/scenery/Adv_engine.ART")->single()->draw(Point(300, 300));
		mSpriteManager.getSprite("art/scenery/cave_entrance.ART")->single()->draw(Point(450, 0));
		mSpriteManager.getSprite("art/monster/cow/cowuwxab.ART")->getImage(27)->draw(Point(50, 400));
	}
}
