#ifndef ENGINE_MATH_ISOMETRIC_HPP
#define ENGINE_MATH_ISOMETRIC_HPP

#include <Arcanum/Math/Point.hpp>

namespace arcanum
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
