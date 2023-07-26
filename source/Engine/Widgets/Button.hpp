#ifndef ENGINE_WIDGETS_BUTTON_HPP
#define ENGINE_WIDGETS_BUTTON_HPP

#include <Engine/Widgets/Widget.hpp>

namespace engine
{
    namespace widgets 
    {
        class Button : public Widget
        {
        public:
            Button(graphics::Canvas* canvas, const math::Point& pos, const math::Point& size);
            void draw();
        private:
        };
    }
}

#endif
