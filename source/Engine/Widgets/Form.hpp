#ifndef ENGINE_WIDGETS_FORM_HPP
#define ENGINE_WIDGETS_FORM_HPP

#include <Engine/Widgets/Container.hpp>

namespace engine
{
    namespace widgets 
    {
        class Form : public Widget
        {
        public:
            Form(graphics::Canvas* canvas, const math::Point& pos, const math::Point& size);
            void draw();
            void add(Widget* widget);
        private:
            Container mWidgets;
        };
    }
}

#endif
