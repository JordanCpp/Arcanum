#include <Arcanum/UI/MainMenu.hpp>

using namespace arcanum::math;
using namespace arcanum::graphics;
using namespace arcanum::ui;

MainMenu::MainMenu(Render* render) :
	mForm(render, Point(0, 0), render->getSize())
{
}

void MainMenu::draw()
{
	mForm.draw();
}
