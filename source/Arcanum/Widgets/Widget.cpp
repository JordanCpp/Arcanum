#include <Arcanum/Widgets/Widget.hpp>

using namespace arcanum::math;
using namespace arcanum::graphics;
using namespace arcanum::widgets;

Widget::Widget(Render* render, const Point& pos, const Point& size) :
	mRender(render),
	mPos(pos),
	mSize(size)
{
}
