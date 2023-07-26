#include <Arcanum/Game/Application.hpp>
#include <iostream>

using namespace arcanum::game;
using namespace engine::math;
using namespace engine::graphics;

int main(int argc, char* argv[])
{
    try 
    {
        Settings settings;
        settings.setWindowSize(Point(1024, 768));
        settings.setWindowTitle("Arcanum project");

        Application application(&settings);
        application.run();
    }
    catch (const char* msg) 
    {
        std::cerr << msg << std::endl;
    }

    return 0;
}
