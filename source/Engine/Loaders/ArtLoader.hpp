#ifndef _Engine_Loaders_ArtLoader_hpp_
#define _Engine_Loaders_ArtLoader_hpp_

#include <Engine/Formats/Art.hpp>
#include <Engine/Graphics/Point.hpp>
#include <Engine/Readers/FileReader.hpp>

namespace engine
{
	namespace loaders
	{
		class ArtLoader
		{
		public:
			void Load(readers::FileReader* fileReader);
			const graphics::Point& getSize();
			const graphics::Point& getOffset();
			const graphics::Point& getDelta();
			uint8_t* getPixels();
			size_t getFrames();
			void frame(size_t index);
		private:
			formats::ArtFile mFile;
			graphics::Point mSize;
			graphics::Point mOffset;
			graphics::Point mDelta;
			std::vector<uint8_t> mPixels;
		};
	}
}

#endif    