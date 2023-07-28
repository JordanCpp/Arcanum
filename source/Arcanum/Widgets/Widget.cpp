#include <Arcanum/Widgets/Widget.hpp>

using namespace arcanum::math;
using namespace arcanum::graphics;
using namespace arcanum::widgets;

Widget::Widget(Canvas* canvas, const Point& pos, const Point& size) :
	mCanvas(canvas),
	mPos(pos),
	mSize(size)
{
}
