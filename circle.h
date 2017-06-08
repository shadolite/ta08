#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include "point.h"
/***********************************************************
 * Class: Circle
 * Description: Inherits Point class and holds radius
 ***********************************************************/
class Circle : public Point
{
  private:
   float radius;

  public:
   void promptForCircle();
   void display();
   void setRadius(const float radius);
   float getRadius();
   
};

#endif
