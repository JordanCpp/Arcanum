#include <Arcanum/Game/Application.hpp>
#include <iostream>

using namespace Engine::Graphics;
using namespace Arcanum::Game;

Application::Application(Arcanum::Game::Settings* settings) :
	Settings(settings),
	Canvas(settings->getWindowSize(), settings->getWindowTitle())
{
	std::cout << FileManager.getFile("oemes/artlist.mes")->getContent().data() << std::endl;
}

Application::~Application()
{
}

void Application::Run()
{
	SDL_Event report = { 0 };

	while (Canvas.getEvent(report))
	{
	}
}
