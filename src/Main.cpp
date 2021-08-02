#include "Platform/Platform.hpp"

#include "Game/Game.h"
#include "Game/Tile.h"

int main()
{
	sf::RenderWindow window;

	Tile tile("content/sfml.png", "sfml", 0);

	window.create(sf::VideoMode(200.0f, 200.0f), "SFML works!");

	// Make Event listener
	sf::Event event;

	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				// Close Window
				window.close();
		}

		// Clear the window
		window.clear();

		// Draw to window
		window.draw(tile);

		// Update the window
		window.display();
	}

	return 0;
}
