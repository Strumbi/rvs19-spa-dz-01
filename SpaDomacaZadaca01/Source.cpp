#include <SFML/Graphics.hpp>
#include "Cvijet.h"

//clang++ -std=c++17 *.cpp -o Source \-I$(brew --prefix sfml@2)/include \-L$(brew --prefix sfml@2)/lib \-lsfml-graphics -lsfml-window -lsfml-system

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Hello, SFML world!");
	window.setFramerateLimit(60);
	Cvijet cvijet(&window);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		cvijet.draw();
		window.display();
	}

	return 0;
}