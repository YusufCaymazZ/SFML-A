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
float takeVxVelocity();
float takeVxVelocity();

int main() {
    sf::Glyph glyph;
    glyph.lsbDelta = 0; // Baþlatma iþlemi

    //Creating a object
    shapes a(5);

    const int cout = 50 ;
    const float radius = 5.0f;
    const sf::Color color = sf::Color::Blue;

	//Creating main window  
	sf::RenderWindow window(sf::VideoMode(a.w, a.h), "Project Window");
    

    // Daireleri belirli bir konumda oluþtur
    sf::CircleShape circles[cout];
    sf::Vector2f velocities[cout];

    for (int i = 0; i < cout; i++)
    {
        circles[i].setRadius(radius);
        circles[i].setFillColor(color);

        float x = takeThePositionX();
        float y = takeThePositionY();
        circles[i].setPosition(x, y);

        float vx = takeVxVelocity();
        float vy = takeVyVelocity();

        if (vx == 0) {
            vx = vx + 1;
        }
        float vy = static_cast<float>(rand() % 5 - 2); // Rastgele hýz y bileþeni (-2 ile 2 arasýnda)
        if (vy == 0) {
            vy = vy + 1;
        }
        velocities[i] = sf::Vector2f(vx, vy);
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
            circles[i].move(velocities[i]); // Her çerçeve için hareket eklenir
            sf::Vector2f position = circles[i].getPosition();
            
            if (position.x < 0 || position.x >  window.getSize().x || 
                position.y < 0 || position.y >  window.getSize().y){
                float x = takeThePositionX();
                float y = takeThePositionY();
                circles[i].setPosition(x, y);
            }
               
            
            window.draw(circles[i]);
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



float takeVxVelocity() {
    float x = static_cast<float>(rand() % 5 - 2); // Rastgele hýz x bileþeni (-2 ile 2 arasýnda)
    return x;
}

float takeVyVelocity() {
    float y = static_cast<float>(rand() % 5 - 2); // Rastgele hýz x bileþeni (-2 ile 2 arasýnda)
    return y;
}


    