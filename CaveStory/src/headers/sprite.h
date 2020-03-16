#ifndef SPRITE_H
#define SPRITE_H

#include <SDL2/SDL.h>

#include <string>

class Graphics;  //forward declaration of Graphics class

class Sprite{
public:
	Sprite();
	Sprite(Graphics &graphics, const std::string &filePath, int sourceX, int sourceY, int width, int height,
		float posX, float posY);
	virtual ~Sprite();
	void update(); //overwrites update in AnimatedSprite
	void draw(Graphics &graphics, int x, int y);
protected: //protected because implemented in animatedSprite
	SDL_Rect _sourceRect;
	SDL_Texture* _spriteSheet;

	float _x, _y;
};


#endif
