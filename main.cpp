#include "shapes.h"
#include "SFML/Graphics.hpp"
#include "SFML/GpuPreference.hpp"
#include "SFML/Graphics/Color.hpp"
#include "SFML/Graphics/ConvexShape.hpp"
using namespace std;
/*sf::Color RandomColor{
    0 + rand() % 256, // Kýrmýzý bileþen
    0 + rand() % 256, // Yeþil bileþen
    0 + rand() % 256  // Mavi bileþen
};
*/
float takeThePositionX() {
    float x = static_cast<float>(rand() % 800);

    return x;
}
float takeThePositionY() {
    float y= static_cast<float>(rand() % 800);
    return y;
}
int main() {
    //Creating a object
    shapes a(5);

    //Creating Shapes
    const int cout = 200 ;
    const float radius = 20.0f;
    sf::Vector2f circlePositions[cout];


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

        // Clear screen
        window.clear(sf::Color::White);


        // Update the window
        window.display();
    }

    return EXIT_SUCCESS;
}



