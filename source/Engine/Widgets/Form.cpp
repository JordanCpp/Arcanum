#include <Engine/Widgets/Form.hpp>

using namespace Engine::Graphics;
using namespace Engine::Widgets;

Form::Form(Canvas* canvas, const Point& pos, const Point& size) :
	Widget(canvas, pos, size)
{
}

void Form::draw()
{
	mWidgets.draw();
}

void Form::add(Widget* widget)
{
	mWidgets.add(widget);
}
