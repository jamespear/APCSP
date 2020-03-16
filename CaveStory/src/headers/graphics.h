#ifndef GRAPHICS_H
#define GRAPHICS_H

/*
 * Graphics class
 * Holds all information dealing with graphics
 */

#include <map>
#include <string>

struct SDL_Window;
struct SDL_Renderer;
struct SDL_Surface;
struct SDL_Texture;
struct SDL_Rect;



class Graphics {
public:
	Graphics();
	~Graphics();
/*SDL_Surface* loadImage
 * re
 */
	SDL_Surface* loadImage(const std::string &filePath);

/*void blitSurface
 *render sprites from spritesheet
 *using SDL_RenderCopy()
 *\param source sprite sheet
 *\param sourceRectangle where sprite is on sprite sheet
 *\param destinationRectangle where to draw sprite on window
 */
	void blitSurface(SDL_Texture* source, SDL_Rect* sourceRectangle, SDL_Rect* destinationRectangle);

/*void flip
 * updates renderer with drawing
 * using SDL_RenderPresent()
 */
	void flip();

/*void clear
 * clears renderer
 * using SDL_RenderClear()
 */
	void clear();

	SDL_Renderer* getRenderer() const;
private:
	SDL_Window *_window;
	SDL_Renderer *_renderer;

	std::map<std::string, SDL_Surface*> _spriteSheets;
};

#endif
