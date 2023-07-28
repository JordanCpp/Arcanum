#ifndef ENGINE_WIDGETS_BUTTON_HPP
#define ENGINE_WIDGETS_BUTTON_HPP

#include <Arcanum/Widgets/Widget.hpp>

namespace arcanum
{
    namespace widgets 
    {
        class Button : public Widget
        {
        public:
            Button(graphics::Render* render, const math::Point& pos, const math::Point& size);
            void draw();
        private:
        };
    }
}

#endif
