/************************
* Matthew McCourry (CS131 SPR - 2018)
* Project notes, user stories and objectives
*
* ( Class Shapes) 
*************************/

/********************
Polymorphism allows programmers to reuse code by using inheritance between multiple classes. In this assignment, you are going to practice polymorphism. Here are the classes you need to create:
1. Create a class called "Shape" which has following two properties: Width, Height. These two properties should be provided to the constructor. It should also have a virtual method called "area" which simply prints "Parent class area."
2. Create a class called "Rectangle" which inherits from class "shape" and set Width and Height property based on given values in its constructor. Override the "area" method and calculate and then print the area of the rectangle using following formula width * height.
3. Create a class called "Triangle" which inherits from class "shape" and set Width and Height property based on given values in its constructor. Override the "area" method and calculate and then print the area of the triangle using following formula width * height / 2.
4. Now using following code to build and execute the classes you created and record the output.
********************/
//Start Header here
#include "Shape.h"
class Shape{
  public: 
    int width;
    int height;
    Shape (){ 
    }
    virtual void area (){
      cout << "Parent Class area" << endl;
    }
};

class Rectangle : public Shape {
  public:
    Rectangle (int xWidth, int yHeight){
      width = xWidth;
      height = yHeight;
      /*  A check to verify that we are correctly grabbing the variables
      cout << "Rectangle\n";
      cout << "width: " << width << " height: " << height << "\n";
     */
    }
    void area (){
      cout << "Based off of "<<width << " and "<< height <<" the area is " << width * height << endl;
    }
};

class Triangle : public Shape {
  public:
    Triangle (int xWidth, int yHeight){
      width = xWidth;
      height = yHeight;
      /* A check to verify that we are correctly grabbing the variables
      cout << "Triangle\n";
      cout << "width: " << width << " height: " << height << "\n";
      */
    }
    void area (){
      cout << "Based off of "<<width << " and "<< height <<" the area is " << width * height /2 << endl;
    }
};


