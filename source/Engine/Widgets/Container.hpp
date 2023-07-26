#ifndef ENGINE_WIDGETS_CONTAINER_HPP
#define ENGINE_WIDGETS_CONTAINER_HPP

#include <Engine/Widgets/Widget.hpp>
#include <vector>

namespace engine
{
    namespace widgets
    {
        class Container
        {
        public:
            void add(Widget* widget);
            void draw();
        private:
            std::vector<Widget*> mWidgets;
        };
    }
}

#endif
