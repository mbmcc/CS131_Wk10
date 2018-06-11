/************************
 * Matthew McCourry (CS131 SPR - 2018)
 * Project notes, user stories and objectives
 *
 * (Shape Class) 
 *  Polymorphism allows programmers to reuse code by using inheritance between multiple classes. 
 *  In this assignment, you are going to practice polymorphism. Here are the classes you need to create:
 *************************/

/********************
 * Checklist:
  [x] 1. Create a class called "Shape" which has following two properties: 
    [x]Width, Height. 
    [x]These two properties should be provided to the constructor. 
    [x]It should also have a virtual method called "area" which simply prints "Parent class area."
  [x] 2. Create a class called "Rectangle" which inherits from class "shape" and 
    [x] set Width and Height property based on given values in its constructor. 
    [x] Override the "area" method and calculate and then print the area of the rectangle 
    using following formula width * height.
  [x] 3. Create a class called "Triangle" which inherits from class "shape" and 
    [x] set Width and Height property based on given values in its constructor. 
    [x] Override the "area" method and calculate and then print the area of the triangle 
    using following formula width * height / 2.
  *******************/

#include <iostream>


using namespace std;

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



/********** Begin Main *********/
int main() {
  /*
  In the `main()` from the assignment, there was some whitespace that seemed to be 
  causeing an erro with the pointer refernces. I removed the whitespace and got the 
  program to calculate correctly.
  */
  Shape *mainShape;
  Rectangle rectangle(23,6); 
  Triangle otriangle(9,8);
  cout << "Rectangle\n"; // added for clarity of output
  mainShape = &rectangle;
  mainShape->area();
  cout << "Triangle\n"; // added for clarity of output
  mainShape = &otriangle; 
  mainShape->area();

return 0;
};
/********* End Main *********/
