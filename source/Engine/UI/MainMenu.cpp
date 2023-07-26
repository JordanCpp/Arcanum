#include <Engine/UI/MainMenu.hpp>

using namespace Engine::Graphics;
using namespace Engine::UI;

MainMenu::MainMenu(Canvas* canvas) :
	mForm(canvas, Point(0, 0), canvas->getSize())
{
}

void MainMenu::draw()
{
	mForm.draw();
}
