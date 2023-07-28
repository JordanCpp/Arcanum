#ifndef ENGINE_WIDGETS_FORM_HPP
#define ENGINE_WIDGETS_FORM_HPP

#include <Arcanum/Widgets/Container.hpp>

namespace arcanum
{
    namespace widgets 
    {
        class Form : public Widget
        {
        public:
            Form(graphics::Render* render, const math::Point& pos, const math::Point& size);
            void draw();
            void add(Widget* widget);
        private:
            Container mWidgets;
        };
    }
}

#endif
