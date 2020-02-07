#include "Enemy.h"

Enemy::Enemy() {
	velocity.x = 700, velocity.y = 700;
}
Enemy::~Enemy() {

}
void Enemy::update(float dt) {


	if (getPosition().x + getSize().x > window->getSize().x) {
		setPosition(sf::Vector2f(window->getSize().x - getSize().x, getPosition().y));
		velocity.x *= -1;
	}
	else if (getPosition().x < 0) {
		setPosition(sf::Vector2f(0, getPosition().y));
		velocity.x *= -1;
	}

	if (getPosition().y < 0) {
		setPosition(sf::Vector2f(getPosition().x, 0));
		velocity.y *= -1;
	}
	else if (getPosition().y + getSize().y > window->getSize().y) {
		setPosition(sf::Vector2f(getPosition().x, window->getSize().y - getSize().y));
		velocity.y *= -1;
	}

	move(sf::Vector2f(velocity.x * dt, velocity.y * dt));

};

