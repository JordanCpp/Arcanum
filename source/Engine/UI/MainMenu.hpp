#ifndef ENGINE_UI_MAINMENU_HPP
#define ENGINE_UI_MAINMENU_HPP

#include <Engine/Widgets/Form.hpp>

namespace engine
{
    namespace ui
    {
        class MainMenu
        {
        public:
            MainMenu(graphics::Canvas* canvas);
            void draw();
        private:
            widgets::Form mForm;
        };
    }
}

#endif
