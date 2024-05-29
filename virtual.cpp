/*Create a base class called Shape with a virtual function calculateArea(). 
Derive two classes Rectangle and Circle from the Shape class. 
Implement the calculateArea() function in both derived classes to calculate the area of a rectangle and a circle, 
respectively. Prompt the user to choose a shape, enter the required dimensions, and display the calculated area 
using dynamic binding.*/
#include <iostream>
using namespace std;

class Shape {
public:
    virtual float calculateArea() = 0;
};

class Rectangle : public Shape {
private:
    float length, width;

public:
    Rectangle(float len, float wid) : length(len), width(wid) {}

    float calculateArea() override {
        return length * width;
    }
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float rad) : radius(rad) {}

    float calculateArea() override {
        return 3.14159 * radius * radius;
    }
};

int main() {
    int choice;
    cout << "Choose a shape:\n";
    cout << "1. Rectangle\n";
    cout << "2. Circle\n";
    cin >> choice;

    Shape* shape;

    if (choice == 1) {
        float length, width;
        cout << "Enter the length and width of the rectangle: ";
        cin >> length >> width;
        shape = new Rectangle(length, width);
    } else if (choice == 2) {
        float radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        shape = new Circle(radius);
    } else {
        cout << "Invalid choice!" << endl;
        return 1;
    }

    cout << "Area: " << shape->calculateArea() << endl;

    delete shape;
    return 0;
}

