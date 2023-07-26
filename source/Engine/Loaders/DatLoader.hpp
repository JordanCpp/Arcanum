#ifndef _Engine_Loaders_DatLoader_hpp_
#define _Engine_Loaders_DatLoader_hpp_

#include <fstream>
#include <Engine/Readers/DatReader.hpp>
#include <Engine/Formats/DataFile.hpp>

namespace engine
{
	namespace loaders
	{
		class DatLoader
		{
		public:
			enum
			{
				Bytes = 1024 * 1024
			};
			DatLoader(readers::DatList* datList);
			bool getFile(const std::string& path, formats::DataFile * dataFile);
		private:
			std::ifstream         mInput;
			std::vector<uint8_t>  mBuffer;
			readers::DatList*     mDatList;
		};
	}
}

#endif    