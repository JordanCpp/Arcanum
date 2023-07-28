#include <Arcanum/UI/MainMenu.hpp>

using namespace arcanum::math;
using namespace arcanum::graphics;
using namespace arcanum::ui;

MainMenu::MainMenu(Canvas* canvas) :
	mForm(canvas, Point(0, 0), canvas->getSize())
{
}

void MainMenu::draw()
{
	mForm.draw();
}
