#include <Engine/Widgets/Widget.hpp>

using namespace Engine::Graphics;
using namespace Engine::Widgets;

Widget::Widget(Canvas* canvas, const Point& pos, const Point& size) :
	mCanvas(canvas),
	mPos(pos),
	mSize(size)
{
}
