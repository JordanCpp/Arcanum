#include <Engine/Widgets/Form.hpp>

using namespace Engine::Graphics;
using namespace Engine::Widgets;

Form::Form(Graphics::Canvas* canvas, const Point& pos, const Point& size) :
	Widget(canvas, pos, size)
{
}

void Form::Draw()
{
	Widgets.Draw();
}

void Form::Add(Widget* widget)
{
	Widgets.Add(widget);
}
