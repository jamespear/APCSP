#ifndef GAME_H
#define GAME_H

#include <animatedSprite.h>

class Graphics;

class Game {
public:
	Game(); //Initialize subsystems and game loop
	~Game();
private:
	void gameLoop(); //what happens while the game is running
	void draw(Graphics &graphics);
	void update(float elapsedTime);

	AnimatedSprite _player;
};

#endif
