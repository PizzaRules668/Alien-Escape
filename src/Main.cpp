#include "Platform/Platform.hpp"

#include "Game/Game.h"
#include "Game/Map.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(1280, 720), "Alien Escape", sf::Style::Default); // Windows for rendering to

	Game game();

	Map map();
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
		//map.draw(&window, sf::RenderStates::Default);
		window.draw(map);
		//window.draw(game);

		// Update the window
		window.display();
	}

	return 0;
}
