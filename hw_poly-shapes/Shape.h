#ifndef Package_H
#define Package_H

/************************
* Matthew McCourry (CS131 SPR - 2018)
* Project notes, user stories and objectives
* 
* Polymorphism allows programmers to reuse code by using inheritance between multiple classes. In this assignment, you are going to practice polymorphism. Here are the classes you need to create:
* 1. Create a class called "Shape" which has following two properties: Width, Height. These two properties should be provided to the constructor. It should also have a virtual method called "area" which simply prints "Parent class area."
* 2. Create a class called "Rectangle" which inherits from class "shape" and set Width and Height property based on given values in its constructor. Override the "area" method and calculate and then print the area of the rectangle using following formula width * height.
* 3. Create a class called "Triangle" which inherits from class "shape" and set Width and Height property based on given values in its constructor. Override the "area" method and calculate and then print the area of the triangle using following formula width * height / 2.
*************************/

// Function Declarations of the class



class Shape { 
  public:
  
   // Default Constructor
    Shape();
    // Overlaod Constructor
  
   // Destructor
    ~Shape();
    
    void area(); //displays "Parent Class area" if child leaves area undef.

};
class Rectangle : public Shape {
  public: 
    Rectangle (int, int); //takes the width and height as integers
    void area(); // calculates the area (width * height)
};

class Triangle : public Shape {
  public: 
    Triangle (int, int); //takes the width and height as integers
    void area(); // calculates the area (width * height /2)
};


#endif
