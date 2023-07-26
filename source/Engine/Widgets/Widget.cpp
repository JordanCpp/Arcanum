#include <Engine/Widgets/Widget.hpp>

using namespace engine::math;
using namespace engine::graphics;
using namespace engine::widgets;

Widget::Widget(Canvas* canvas, const Point& pos, const Point& size) :
	mCanvas(canvas),
	mPos(pos),
	mSize(size)
{
}
