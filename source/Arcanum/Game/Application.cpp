#include <Arcanum/Game/Application.hpp>
#include <iostream>

using namespace arcanum::math;
using namespace arcanum::game;
using namespace arcanum::graphics;

Application::Application(Settings* settings) :
	mSettings(settings),
	mWindow(settings->getWindowSize(), settings->getWindowTitle()),
	mRender(&mWindow),
	mSpriteManager(&mRender, &mFileManager, &mArtLoader),
	mMainMenu(&mRender),
	mMap(&mMapData)
{
	mMapData.reset(Point(10, 10));

	for (size_t i = 0; i < mMapData.getTiles().size(); i++)
	{
		mMapData.getTiles()[i].setSprite(mSpriteManager.getSprite("art/tile/grsbse0c.ART"));
	}

	objects::Scenery scenery;

	scenery.setPos(Point(1, 3));
	scenery.setSprite(mSpriteManager.getSprite("art/scenery/engine.ART"));
	mMapData.getSceneries().push_back(scenery);

	scenery.setPos(Point(8, 8));
	scenery.setSprite(mSpriteManager.getSprite("art/scenery/tree.ART"));
	mMapData.getSceneries().push_back(scenery);
}

void Application::run()
{
	SDL_Event report = { 0 };

	size_t x    = 0;
	size_t y    = 0;
	float scale = 1.0f;

	const size_t step = 50;

	while (mWindow.getEvent(report))
	{
		if (report.type == SDL_KEYDOWN)
		{
			if (report.key.keysym.sym == SDLK_w)
				y += step;

			if (report.key.keysym.sym == SDLK_s)
				y -= step;

			if (report.key.keysym.sym == SDLK_a)
				x += step;

			if (report.key.keysym.sym == SDLK_d)
				x -= step;

			if (report.key.keysym.sym == SDLK_e)
				scale += 0.1f;

			if (report.key.keysym.sym == SDLK_r)
				scale -= 0.1f;
		}

		mRender.Clear();

		mMainMenu.draw();

		mMap.Draw(Point(x, y), scale);

		mRender.Draw();
	}
}
