#include <Engine/UI/MainMenu.hpp>

using namespace Engine::Graphics;
using namespace Engine::UI;

MainMenu::MainMenu(Graphics::Canvas* canvas) :
	Form(canvas, Point(0, 0), canvas->getSize())
{
}

void MainMenu::Draw()
{
	Form.Draw();
}
