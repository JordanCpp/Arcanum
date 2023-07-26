#ifndef ENGINE_LOADERS_ARTLOADER_HPP
#define ENGINE_LOADERS_ARTLOADER_HPP

#include <Engine/Formats/Art.hpp>
#include <Engine/Math/Point.hpp>
#include <Engine/Readers/FileReader.hpp>

namespace engine
{
	namespace loaders
	{
		class ArtLoader
		{
		public:
			void Load(readers::FileReader* fileReader);
			const math::Point& getSize();
			const math::Point& getOffset();
			const math::Point& getDelta();
			uint8_t* getPixels();
			size_t getFrames();
			void frame(size_t index);
		private:
			formats::ArtFile mFile;
			math::Point mSize;
			math::Point mOffset;
			math::Point mDelta;
			std::vector<uint8_t> mPixels;
		};
	}
}

#endif    