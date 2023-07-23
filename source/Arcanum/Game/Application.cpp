#include <Arcanum/Game/Application.hpp>

using namespace Arcanum::Game;

Application::Application() :
	Canvas(1024, 768, "Arcanum project")
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
	}
}