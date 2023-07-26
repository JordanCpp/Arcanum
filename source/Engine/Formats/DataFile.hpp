#ifndef _Engine_Formats_DataFile_hpp_
#define _Engine_Formats_DataFile_hpp_

#include <vector>
#include <cstdint>

namespace engine
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
