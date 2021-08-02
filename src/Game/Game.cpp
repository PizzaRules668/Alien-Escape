#include "Game.h"

Game::Game()
{}

Game::~Game()
{
}

void Game::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(this->sprite, states);
}