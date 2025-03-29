#include "Cvijet.h"

Cvijet::Cvijet(sf::RenderWindow* window) 
{
    this->window = window;
}

void Cvijet::draw() 
{
    //sunce
    sf::CircleShape sunce(15.f);
    sunce.setFillColor(yellow);

    // Grana
    sf::RectangleShape grana(sf::Vector2f(150.f, 5.f));
    grana.setFillColor(green);
    grana.rotate(90.f); 
    grana.setPosition(150.f, 200.f);

    // Cvijet
    sf::CircleShape cvijet(40.f);
    cvijet.setFillColor(green);
    cvijet.setOutlineThickness(10.f);
    cvijet.setOutlineColor(red);

    float cvijetOffsetX = grana.getPosition().x - cvijet.getRadius();  
    float cvijetOffsetY = grana.getPosition().y - grana.getSize().y / 2 - cvijet.getRadius();

    cvijet.setPosition(cvijetOffsetX, cvijetOffsetY);

    // List
    sf::ConvexShape list;
    list.setPointCount(4); 
    list.setPoint(0, sf::Vector2f(0.f, 0.f));      
    list.setPoint(1, sf::Vector2f(25.f, -50.f));  
    list.setPoint(2, sf::Vector2f(42.f, 0.f));    
    list.setPoint(3, sf::Vector2f(25.f, 75.f));   
    list.rotate(-120.f);
    list.setPosition(150.f, 200.f); 
    list.setFillColor(green);       
    list.setPosition(grana.getPosition().x + 50, grana.getPosition().y + 100);

    window->draw(sunce);
    window->draw(grana);
    window->draw(cvijet);
    window->draw(list);
}