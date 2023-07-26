#include <Engine/UI/MainMenu.hpp>

using namespace engine::math;
using namespace engine::graphics;
using namespace engine::ui;

MainMenu::MainMenu(Canvas* canvas) :
	mForm(canvas, Point(0, 0), canvas->getSize())
{
}

void MainMenu::draw()
{
	mForm.draw();
}
