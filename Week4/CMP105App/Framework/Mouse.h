#pragma once
#include "SFML\Graphics.hpp"
#include "Input.h"

class Mouse : public sf::RectangleShape {
public:
	Mouse();
	~Mouse();
	void followMouse();
	void setInput(Input* newInput) { input = newInput; };

	Input* input;
	
};
