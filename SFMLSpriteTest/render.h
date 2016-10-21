#include <iostream>
#include <SFML\Graphics.hpp>
#include "playerCharacter.h"

class render{
public:
	render();
	void draw();
	void display();
	void drawCharacter();
private:
	sf::RenderWindow window;
	float windowx;
	float windowy;
	playerCharacter player;
	int speedcounter;
};