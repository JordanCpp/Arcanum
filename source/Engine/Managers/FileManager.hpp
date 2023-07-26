#ifndef _Engine_Managers_FileManager_hpp_
#define _Engine_Managers_FileManager_hpp_

#include <Engine/Readers/DatReader.hpp>
#include <Engine/Loaders/DatLoader.hpp>
#include <Engine/Formats/DataFile.hpp>

namespace engine
{
    namespace managers
    {
        class FileManager
        {
        public:
            FileManager();
            formats::DataFile* getFile(const std::string& path);
        private:
            readers::DatList   mDatList;
            readers::DatReader mDatReader;
            loaders::DatLoader mDatLoader;
            formats::DataFile  mResult;
        };
    }
}

#endif
