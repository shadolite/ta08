#include <iostream>
//#include "point.h"
#include "circle.h"
using namespace std;

/***********************************************************
 * Function: Circle::display
 * Outputs circle.
 ***********************************************************/
void Circle :: display()
{
   Point::display();
   cout << " - Radius: " << radius << endl;
}

/***********************************************************
 * Function: Circle::promptForCircle
 * Prompts the user for the circle.
 ***********************************************************/
void Circle :: promptForCircle()
{
   promptForPoint();
   cout << "Enter radius: ";
   cin >> radius;
   
}

/***********************************************************
 * Function: Circle::promptForCircle
 * Prompts the user for the circle.
 ***********************************************************/
void Circle :: setRadius(const float radius)
{
   this->radius = radius;
}

/***********************************************************
 * Function: Circle::getRadius
 * Returns the radius
 ***********************************************************/
float Circle :: getRadius()
{
   return radius;
}
