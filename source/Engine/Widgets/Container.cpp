#include <Engine/Widgets/Container.hpp>

using namespace Engine::Widgets;

void Container::Add(Widget* widget)
{
	Widgets.push_back(widget);
}

void Container::Draw()
{
	for (size_t i = 0; i < Widgets.size(); i++)
	{
		Widgets[i]->Draw();
	}
}