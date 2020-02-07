#include "Player.h"

Player::Player() {
	velocity = sf::Vector2f(0, 0);
	speed = 1000;
}

Player::~Player() {

}

void Player::handleInput(float dt) {
	velocity = sf::Vector2f(0, 0);
	if (pIn->isKeyDown(sf::Keyboard::W)) {
		velocity.y += -speed;
	}
	if (pIn->isKeyDown(sf::Keyboard::A)) {
		velocity.x += -speed;
	}
	if (pIn->isKeyDown(sf::Keyboard::S)) {
		velocity.y += speed;
	}
	if (pIn->isKeyDown(sf::Keyboard::D)) {
		velocity.x += speed;
	}
	move(sf::Vector2f(velocity.x * dt, velocity.y * dt));
}

void Player::setSpeed(float newSpeed) {
	speed = newSpeed;
}

float Player::getSpeed() {
	return speed;
}

/*
void Player::update(float dt) {

}
*/