#ifndef ENGINE_GRAPHICS_SPRITE_HPP
#define ENGINE_GRAPHICS_SPRITE_HPP

#include <Arcanum/Graphics/Image.hpp>
#include <vector>

namespace arcanum
{
	namespace graphics
	{
		class Sprite
		{
		public:
			~Sprite();
			void append(Image* image);
			Image* getImage(size_t index);
			Image* single();
			size_t getFrames();
		private:
			std::vector<Image*> mImages;
		};
	}
}

#endif    