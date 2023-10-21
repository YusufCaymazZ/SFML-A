#include "shapes.h"
#include "SFML/Graphics.hpp"
#include "SFML/GpuPreference.hpp"
#include "SFML/Graphics/Color.hpp"
#include "SFML/Graphics/ConvexShape.hpp"
#include "SFML/Graphics/Text.hpp"
using namespace std;
/*sf::Color RandomColor{
    0 + rand() % 256, // Kýrmýzý bileþen
    0 + rand() % 256, // Yeþil bileþen
    0 + rand() % 256  // Mavi bileþen
};
*/
float takeThePositionX();
float takeThePositionY();


int main() {
    sf::Glyph glyph;
    glyph.lsbDelta = 0; // Baþlatma iþlemi

    //Creating a object
    shapes a(5);
    //Creating Shapes
    const int cout = 200 ;
    const float radius = 5.0f;
    const sf::Color color = sf::Color::Blue;


    const float radius = 20.0f;
	//Creating main window  
	sf::RenderWindow window(sf::VideoMode(a.w, a.h), "Project Window");
    sf::CircleShape circle();
    sf::Vector2f circlePositions[cout];

    // Daireleri belirli bir konumda oluþtur
    for (int i = 0; i < cout; i++)
    {
        float x = takeThePositionX();
        float y = takeThePositionY();
        circlePositions[i] = sf::Vector2f(x, y);
    }
    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::White);


        for (int i = 0; i < cout; i++)
        {
            sf::CircleShape circle(radius);
            circle.setFillColor(color);
            circle.setPosition(circlePositions[i]);
            window.draw(circle);
        }


        // Update the window
        window.display();
    }

    return EXIT_SUCCESS;
}



float takeThePositionX() {
    float x = static_cast<float>(rand() % 1280);

    return x;
}


float takeThePositionY() {
    float y = static_cast<float>(rand() % 760);
    return y;
}



