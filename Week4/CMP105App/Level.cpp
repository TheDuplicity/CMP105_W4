#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;
	player.setInput(in);

	// initialise game objects
	texture.loadFromFile("gfx/Goomba.png");

	enemy.setTexture(&texture);
	enemy.setSize(sf::Vector2f(200, 100));
	enemy.setPosition(100, 100);

	textureTwo.loadFromFile("gfx/sonic.png");

	player.setTexture(&textureTwo);
	player.setSize(sf::Vector2f(100, 100));
	player.setPosition(0, 100);	

}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{

	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}

	player.handleInput(dt);
	
}

// Update game objects
void Level::update(float dt)
{
	enemy.update(dt, window);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(enemy);
	window->draw(player);

	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}