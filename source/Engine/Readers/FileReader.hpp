#ifndef _Engine_Readers_FileReader_hpp_
#define _Engine_Readers_FileReader_hpp_

#include <cstdint>
#include <Engine/Formats/DataFile.hpp>

namespace Engine
{
    namespace Readers
    {
        class FileReader
        {
        public:
            void open(Formats::DataFile* dataFile);
            void close();
            void read(void* dest, size_t bytes);
        private:
            size_t mOffset;
            Formats::DataFile* mDataFile;
        };
    }
}

#endif
