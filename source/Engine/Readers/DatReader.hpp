#ifndef ENGINE_READERS_DATREADER_HPP
#define ENGINE_READERS_DATREADER_HPP

#include <fstream>
#include <unordered_map>
#include <Engine/Common/PathNormalizer.hpp>

namespace engine
{
    namespace readers
    {
        class DatItem
        {
        public:
            enum
            {
                Uncompressed = 0x01,
                Compressed   = 0x02,
                MaxPath      = 128,
                MaxName      = 64
            };

            DatItem();

            int  NameSize;
            char Name[MaxPath];
            int  Unknown1;
            int  Type;
            int  RealSize;
            int  PackedSize;
            int  Offset;
            char DatFile[MaxName];
        };

        class DatList
        {
        public:
            DatItem* getItem(const std::string& file);
            std::unordered_map<std::string, DatItem> List;
        };

        class DatReader
        {
        public:
            bool reset(const std::string& file, DatList& datList);
        private:
            common::PathNormalizer mPathNormalizer;
            std::ifstream mInput;
        };
    }
}

#endif
