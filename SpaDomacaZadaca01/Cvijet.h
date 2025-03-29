#pragma once
#include <SFML/Graphics.hpp>

class Cvijet
{
private:
    sf::RenderWindow* window;
    sf::Color green = sf::Color(0, 255, 0);
    sf::Color yellow = sf::Color(150, 255, 0);
    sf::Color red = sf::Color(255,0,0);
public:
    Cvijet(sf::RenderWindow* window);
    void draw();
};