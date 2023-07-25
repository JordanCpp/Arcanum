#include <Arcanum/Game/Application.hpp>
#include <iostream>

using namespace Engine::Graphics;
using namespace Arcanum::Game;

Application::Application(Arcanum::Game::Settings* settings) :
	Settings(settings),
	Canvas(settings->getWindowSize(), settings->getWindowTitle()),
	SpriteManager(&Canvas, &FileManager, &ArtLoader),
	MainMenu(&Canvas)

{
}

Application::~Application()
{
}

void Application::Run()
{
	SDL_Event report = { 0 };

	while (Canvas.getEvent(report))
	{
		MainMenu.Draw();

		SpriteManager.getSprite("art/scenery/engine.ART")->single()->draw(Point(0, 0));
		SpriteManager.getSprite("art/scenery/Adv_engine.ART")->single()->draw(Point(300, 300));
		SpriteManager.getSprite("art/scenery/cave_entrance.ART")->single()->draw(Point(450, 0));
		SpriteManager.getSprite("art/monster/cow/cowuwxab.ART")->getImage(27)->draw(Point(50, 400));
	}
}
