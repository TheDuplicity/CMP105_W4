#pragma once
#include "GameObject.h"

class Enemy : public GameObject {
protected:

public:
	Enemy();
	~Enemy();
	void update(float dt, sf::RenderWindow* window);


};
