#ifndef ENGINE_WIDGETS_WIDGET_HPP
#define ENGINE_WIDGETS_WIDGET_HPP

#include <Arcanum/Graphics/Canvas.hpp>

namespace arcanum
{
    namespace widgets
    {
        class Widget
        {
        public:
            Widget(graphics::Canvas* canvas, const math::Point& pos, const math::Point& size);
            virtual void draw() = 0;
        private:
            graphics::Canvas* mCanvas;
            math::Point mPos;
            math::Point mSize;
        };
    }
}

#endif
