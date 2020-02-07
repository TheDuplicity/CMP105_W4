#pragma once
#include  "SFML\Graphics.hpp";

class Background : public sf::RectangleShape {
public:
	Background();
	~Background();
	void update(float dt);
};
