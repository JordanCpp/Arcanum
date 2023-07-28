#ifndef ENGINE_LOADERS_DATLOADER_HPP
#define ENGINE_LOADERS_DATLOADER_HPP

#include <fstream>
#include <Arcanum/Readers/DatReader.hpp>
#include <Arcanum/Formats/DataFile.hpp>

namespace arcanum
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