#ifndef _Engine_Widgets_Form_hpp_
#define _Engine_Widgets_Form_hpp_

#include <Engine/Widgets/Container.hpp>

namespace Engine
{
    namespace Widgets 
    {
        class Form : public Widget
        {
        public:
            Form(Graphics::Canvas* canvas, const Graphics::Point& pos, const Graphics::Point& size);
            void Draw();
            void Add(Widget* widget);
        private:
            Container Widgets;
        };
    }
}

#endif
