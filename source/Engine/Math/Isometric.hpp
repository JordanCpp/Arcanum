#ifndef ENGINE_MATH_ISOMETRIC_HPP
#define ENGINE_MATH_ISOMETRIC_HPP

#include <Engine/Math/Point.hpp>

namespace engine
{
    namespace math
    {
        class Isometric
        {
        public:
            const Point& CartesianToIsometric(const Point& pos);
            const Point& IsometricToCartesian(const Point& pos);
        private:
            Point mResult;
        };
    }
}

#endif
