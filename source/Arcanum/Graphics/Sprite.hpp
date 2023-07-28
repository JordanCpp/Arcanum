#ifndef ENGINE_GRAPHICS_SPRITE_HPP
#define ENGINE_GRAPHICS_SPRITE_HPP

#include <Arcanum/Graphics/Image.hpp>
#include <vector>
#include <memory>

namespace arcanum
{
	namespace graphics
	{
		class Sprite
		{
		public:
			void append(std::shared_ptr<Image> image);
			std::shared_ptr<Image> getImage(size_t index);
			std::shared_ptr<Image> single();
			size_t getFrames();
		private:
			std::vector<std::shared_ptr<Image>> mImages;
		};
	}
}

#endif    