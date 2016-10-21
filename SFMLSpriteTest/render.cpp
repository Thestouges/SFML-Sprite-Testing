#include "render.h"

render::render(){
	windowx = 800;
	windowy = 600;
	speedcounter = 0;
	window.create(sf::VideoMode(windowx,windowy), "Sprite Test");
	draw();
}

void render::draw(){
	while (window.isOpen()){
		sf::Event event;
		while (window.pollEvent(event)){
			if (event.type == sf::Event::Closed)
			window.close();
		}

		window.clear();
		drawCharacter();
		window.display();
		
	}
}

void render::drawCharacter(){
	if(speedcounter >= 500){
		player.setSprite();
		speedcounter = 0;
	}
	else
		speedcounter++;
	window.draw(player.getSprite());
}