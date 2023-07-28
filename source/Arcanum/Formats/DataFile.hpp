#ifndef ENGINE_FORMATS_DATAFILE_HPP
#define ENGINE_FORMATS_DATAFILE_HPP

#include <vector>
#include <cstdint>

namespace arcanum
{
    namespace formats
    {
        class DataFile
        {
        public:
            std::vector<uint8_t>& getContent();
        private:
            std::vector<uint8_t> mContent;
        };
    }
}

#endif
