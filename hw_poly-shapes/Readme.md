Polymorphism allows programmers to reuse code by using inheritance between multiple classes. In this assignment, you are going to practice polymorphism. Here are the classes you need to create:
1. Create a class called "Shape" which has following two properties: Width, Height. These two properties should be provided to the constructor. It should also have a virtual method called "area" which simply prints "Parent class area."
2. Create a class called "Rectangle" which inherits from class "shape" and set Width and Height property based on given values in its constructor. Override the "area" method and calculate and then print the area of the rectangle using following formula width * height.
3. Create a class called "Triangle" which inherits from class "shape" and set Width and Height property based on given values in its constructor. Override the "area" method and calculate and then print the area of the triangle using following formula width * height / 2.
4. Now using following code to build and execute the classes you created and record the output.
```cpp
    int main() {
       Shape *mainShape;
       Rectangle rectangle(23,6);
       Triangle  otriangle(9,8);
       mainShape = &rectangle;
       mainShape->area();
       mainShape = &otriangle; 
       mainShape->area();
    
    return 0;
    }
```
5. Submit the code for all the classes along with the report and output when you run the program.
Let me know if you have any question.
