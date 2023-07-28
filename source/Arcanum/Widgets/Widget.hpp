#ifndef ENGINE_WIDGETS_WIDGET_HPP
#define ENGINE_WIDGETS_WIDGET_HPP

#include <Arcanum/Graphics/Render.hpp>

namespace arcanum
{
    namespace widgets
    {
        class Widget
        {
        public:
            Widget(graphics::Render* render, const math::Point& pos, const math::Point& size);
            virtual void draw() = 0;
        private:
            graphics::Render* mRender;
            math::Point mPos;
            math::Point mSize;
        };
    }
}

#endif
