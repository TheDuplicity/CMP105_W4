#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;
	player.setInput(in);
	mouse.setInput(in);
	enemy.setWindow(hwnd);
	enemyTwo.setWindow(hwnd);

	window->setMouseCursorVisible(false);

	// initialise game objects
	texture.loadFromFile("gfx/Goomba.png");

	enemy.setTexture(&texture);
	enemy.setSize(sf::Vector2f(200, 100));
	enemy.setPosition(100, 100);

	textureThree.loadFromFile("gfx/icon.png");

	enemyTwo.setTexture(&textureThree);
	enemyTwo.setSize(sf::Vector2f(200, 200));
	enemyTwo.setPosition(100, 100);

	textureTwo.loadFromFile("gfx/ShovelKnight.png");

	player.setTexture(&textureTwo);
	player.setSize(sf::Vector2f(100, 100));
	player.setPosition(0, 100);	

	mouse.setTexture(&textureThree);
	mouse.setSize(sf::Vector2f(40,40));

	textureFour.loadFromFile("gfx/Level1_1.png");

	background.setTexture(&textureFour);
	background.setSize(sf::Vector2f((window->getSize().x * 15), window->getSize().y));
	background.setPosition(sf::Vector2f(0,0));

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
	enemy.update(dt);
	enemyTwo.update(dt);
	mouse.followMouse();
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(background);
	window->draw(enemy);
	window->draw(enemyTwo);
	window->draw(player);
	window->draw(mouse);

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