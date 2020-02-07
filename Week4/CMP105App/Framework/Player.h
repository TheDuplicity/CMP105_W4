#pragma once

#include "GameObject.h"

class Player : public GameObject {

protected:

	float speed;
	Input* pIn;

public:
	Player();
	~Player();
	void handleInput(float dt);
	void setInput(Input* passInput) { pIn = passInput;};
	//void update(float dt);
	void setSpeed(float newSpeed);
	float getSpeed();

};