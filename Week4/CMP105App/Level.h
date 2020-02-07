#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include "Framework/Player.h"
#include "Framework/Enemy.h"
#include "Framework/Mouse.h"
#include "Framework/BackGround.h"
#include <string.h>
#include <iostream>


class Level{
public:
	Level(sf::RenderWindow* hwnd, Input* in);
	~Level();

	void handleInput(float dt);
	void update(float dt);
	void render();

private:
	// Default functions for rendering to the screen.
	void beginDraw();
	void endDraw();

	// Default variables for level class.
	sf::RenderWindow* window;
	Input* input;

	// Level objects
	GameObject testSprite;
	Player player;
	Enemy enemy, enemyTwo;
	Mouse mouse;
	Background background;
	sf::Texture texture, textureTwo, textureThree, textureFour;

};