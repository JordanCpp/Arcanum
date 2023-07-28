#ifndef ENGINE_UI_MAINMENU_HPP
#define ENGINE_UI_MAINMENU_HPP

#include <Arcanum/Widgets/Form.hpp>

namespace arcanum
{
    namespace ui
    {
        class MainMenu
        {
        public:
            MainMenu(graphics::Render* render);
            void draw();
        private:
            widgets::Form mForm;
        };
    }
}

#endif
