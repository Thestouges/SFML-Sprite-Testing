#include "playerCharacter.h"

playerCharacter::playerCharacter(){
	counter = 1;
	if (!playerTexture.loadFromFile("tigersprite.png")){
		// error...
	}
	setDefaultSprite();
}

sf::Texture playerCharacter::getTexture(){
	return playerTexture;
}

void playerCharacter::setDefaultSprite(){
	playerSprite.setTexture(playerTexture);
	textureSize.x = playerSprite.getGlobalBounds().height;
	textureSize.y = playerSprite.getGlobalBounds().width;
	playerSprite.setTextureRect(sf::IntRect(textureSize.x/2,3*textureSize.y/4,textureSize.x,textureSize.y));
	playerSprite.setOrigin(textureSize.x/2, 0); //set origin
	playerSprite.setScale(-1,1); //flips on origin

}

sf::Sprite playerCharacter::getSprite(){
	return playerSprite;
}

sf::Vector2i playerCharacter::getTextureSize(){
	return textureSize;
}

void playerCharacter::setSprite(){
	switch (counter)
	{
	case 1:
		counter++;
		playerSprite.setTextureRect(sf::IntRect(0,0,textureSize.x/2,textureSize.y/4));
		break;
	case 2:
		counter++;
		playerSprite.setTextureRect(sf::IntRect(textureSize.x/2,0,textureSize.x,textureSize.y/4));
		break;
	case 3:
		counter++;
		playerSprite.setTextureRect(sf::IntRect(0,textureSize.y/4,textureSize.x/2,textureSize.y/4));
		break;
	case 4:
		counter++;
		playerSprite.setTextureRect(sf::IntRect(textureSize.x/2,textureSize.y/4,textureSize.x,textureSize.y/4));
		break;
	case 5:
		counter++;
		playerSprite.setTextureRect(sf::IntRect(0,textureSize.y/2,textureSize.x/2,textureSize.y/4));
		break;
	case 6:
		counter++;
		playerSprite.setTextureRect(sf::IntRect(textureSize.x/2,textureSize.y/2,textureSize.x,textureSize.y/4));
		break;
	case 7:
		counter++;
		playerSprite.setTextureRect(sf::IntRect(0,3*textureSize.y/4,textureSize.x/2,textureSize.y));
		break;
	case 8:
		counter = 1;
		playerSprite.setTextureRect(sf::IntRect(textureSize.x/2,3*textureSize.y/4,textureSize.x,textureSize.y/4));
		break;
	default:
		break;
	}
}