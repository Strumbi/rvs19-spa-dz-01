#pragma once
#include <SFML/Graphics.hpp>

class Cvijet
{
private:
    sf::RenderWindow* window;
    sf::Color green = sf::Color(0, 255, 0);
    sf::Color yellow = sf::Color(150, 255, 0);
    sf::Color red = sf::Color(255,0,0);

    sf::Clock clock;
    sf::Time elapsed_time;
    
    
    float PI = 3.14f;
    
    void sun_animate(sf::CircleShape& sun, float minSize, float maxSize, float duratation); 
    
public:
    Cvijet(sf::RenderWindow* window);
    float get_oscillationProgress(float progress);
    float get_current_size(float minSize, float maxSize, float oscillationProgress);

    void draw();
};