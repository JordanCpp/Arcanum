#ifndef _Engine_Managers_FileManager_hpp_
#define _Engine_Managers_FileManager_hpp_

#include <Engine/Readers/DatReader.hpp>
#include <Engine/Loaders/DatLoader.hpp>
#include <Engine/Formats/DataFile.hpp>

namespace Engine
{
    namespace Managers
    {
        class FileManager
        {
        public:
            FileManager();
            Formats::DataFile* getFile(const std::string& path);
        private:
            Readers::DatList   DatList;
            Readers::DatReader DatReader;
            Loaders::DatLoader DatLoader;
            Formats::DataFile  Result;
        };
    }
}

#endif
