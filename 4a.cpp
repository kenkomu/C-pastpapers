#include <iostream>
using namespace std;


class Shape
{
public:
    double width, height;
	//  constructor
	Shape(double newWidth, double newHeight){
		this->width=newWidth;
		this->height=newHeight;
	}
};


class Rectangle: public Shape
{
public:

    Rectangle(double width, double height):Shape(width,height)
    {


    }
    double area()
    {
        return (width*height);
    }
};


class Triangle: public Shape
{
public:
    Triangle(double base, double height): Shape(base,height)
    {


    }
    double area()
    {
        return (width*height)/2.0;
    }
};


int main ()
{
	Rectangle rectangle(5.0,3.0);
	Triangle triangle(2.0,5.0);
	cout <<"Area of rectangle is: "<< rectangle.area() << endl;
	cout <<"Area of triangle is: "<< triangle.area() << endl;
	return 0;
}
