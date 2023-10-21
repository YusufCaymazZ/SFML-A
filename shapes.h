#include <SFML/Graphics/Shape.hpp>
#include "SFML/Graphics/Color.hpp"
#include <iostream>
#include <string>
using namespace std;
class shapes {
public:
		int numOfShapes;
		int w;
		int h;
		shapes(int nums ,int weight = 1280,int height = 760 ){ //constructor
			numOfShapes = nums;
			w = weight;
			h = height;
		}
};

