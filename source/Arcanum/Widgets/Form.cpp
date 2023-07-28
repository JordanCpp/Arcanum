#include <Arcanum/Widgets/Form.hpp>

using namespace arcanum::math;
using namespace arcanum::graphics;
using namespace arcanum::widgets;

Form::Form(Render* render, const Point& pos, const Point& size) :
	Widget(render, pos, size)
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
