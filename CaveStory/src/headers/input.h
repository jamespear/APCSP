#ifndef INPUT_H
#define INPUT_H

#include <SDL2/SDL.h>
#include <map>

class Input {
public:
	/*void beginNewFrame
	 * clears _pressedKeys and _releasedKeys at beginning of frame
	 */
	void beginNewFrame();

	/*void keyUpEvent
	 * implemented in game if event == keyUpEvent
	 * sets _releasedKey true and _heldKeys false
	 */
	void keyUpEvent(const SDL_Event &event);
	/*void keyDownEvent
	 * implemented in game if event == keyDownEvent
	 * sets _pressedKeys=true and _heldKeys=true
	 */
	void keyDownEvent(const SDL_Event &event);

	bool wasKeyPressed(SDL_Scancode key); //return _pressedKeys
	bool wasKeyReleased(SDL_Scancode key); //return _releasedKeys
	bool isKeyHeld(SDL_Scancode key); //return _heldKeys
private:
	std::map<SDL_Scancode, bool> _heldKeys;
	std::map<SDL_Scancode, bool> _pressedKeys;
	std::map<SDL_Scancode, bool> _releasedKeys;
};

#endif
