#ifndef _Engine_Formats_DataFile_hpp_
#define _Engine_Formats_DataFile_hpp_

#include <vector>
#include <cstdint>

namespace Engine
{
    namespace Formats
    {
        class DataFile
        {
        public:
            std::vector<uint8_t>& getContent();
        private:
            std::vector<uint8_t> Content;
        };
    }
}

#endif
