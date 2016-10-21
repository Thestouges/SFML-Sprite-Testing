#include <SFML/Graphics.hpp>

class playerCharacter{
public:
	playerCharacter();
	void setDefaultSprite();
	sf::Sprite getSprite();
	void setSprite();
	void setTexture();
	sf::Texture getTexture();
	sf::Vector2i getTextureSize();
private:
	int counter;
	sf::Texture playerTexture;
	sf::Sprite playerSprite;
	sf::Vector2i textureSize;
};