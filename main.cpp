#include "shapes.h"
#include "SFML/Graphics.hpp"
#include "SFML/GpuPreference.hpp"
#include "SFML/Graphics/Color.hpp"
#include "SFML/Graphics/ConvexShape.hpp"
#include "SFML/Graphics/Text.hpp"
using namespace std;
/*sf::Color RandomColor{
    0 + rand() % 256, // K�rm�z� bile�en
    0 + rand() % 256, // Ye�il bile�en
    0 + rand() % 256  // Mavi bile�en
};
*/
float takeThePositionX() {
    float x = static_cast<float>(rand() % 800);

    return x;
}
float takeThePositionY() {
    return y;
}
int main() {
    //Creating a object
    shapes a(5);
    //Creating Shapes
    const int cout = 200 ;
    const float radius = 20.0f;
	//Creating main window  
	sf::RenderWindow window(sf::VideoMode(a.w, a.h), "Project Window");


    
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
        window.draw(circle);


        // Update the window
        window.display();
    }

    return EXIT_SUCCESS;
}



