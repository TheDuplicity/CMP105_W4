#pragma once
#include "GameObject.h"

class Enemy : public GameObject {
protected:
	sf::Window* window;
public:
	Enemy();
	~Enemy();
	void setWindow(sf::Window* getWindow) { window = getWindow; };
	void update(float dt);


};
