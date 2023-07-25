#ifndef _Engine_Loaders_DatLoader_hpp_
#define _Engine_Loaders_DatLoader_hpp_

#include <fstream>
#include <Engine/Readers/DatReader.hpp>
#include <Engine/Formats/DataFile.hpp>

namespace Engine
{
	namespace Loaders
	{
		class DatLoader
		{
		public:
			enum
			{
				Bytes = 1024 * 1024
			};
			DatLoader(Readers::DatList* datList);
			bool getFile(const std::string& path, Formats::DataFile * dataFile);
		private:
			std::ifstream         Input;
			std::vector<uint8_t>  Buffer;
			Readers::DatList*     DatList;
		};
	}
}

#endif    