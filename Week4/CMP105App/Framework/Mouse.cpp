#include "Mouse.h"

Mouse::Mouse() {

}
Mouse::~Mouse() {

}

void Mouse::followMouse() {
	setPosition(sf::Vector2f(input->getMouseX(), input->getMouseY()));
}

