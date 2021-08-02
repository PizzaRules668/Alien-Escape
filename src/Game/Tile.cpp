#include "Tile.h"

Tile::Tile(std::string filePath, std::string name, int id)
{
	this->name = name;
	this->id = id;

	this->filePath = filePath;
	if (!this->tex.loadFromFile(filePath))
		throw "Could not load texture";
	this->sprite.setTexture(this->tex);
}

void Tile::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(this->sprite, states);
}