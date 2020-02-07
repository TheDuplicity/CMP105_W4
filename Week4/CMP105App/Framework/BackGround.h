#pragma once
#include  "SFML\Graphics.hpp"
#include "Player.h"


class Background : public sf::RectangleShape {
public:
	Background();
	~Background();
	void update(float dt);


};
