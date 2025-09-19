#include "Point.h"
#include <iostream>
#include <cmath>
using namespace std;

Point::Point() : x(0), y(0) {}
Point::Point(int xVal, int yVal) : x(xVal), y(yVal) {}
void Point::print() const { cout << "(" << x << "," << y << ")" << endl; }
double Point::distance() const { return std::sqrt(x * x + y * y); }
void Point::move(int a, int b) { x += a; y += b; }
int Point::getX() const { return x; }
int Point::getY() const { return y; }
void Point::setX(int value) { x = value; }
void Point::setY(int value) { y = value; }
void Point::multiply(int scalar) { x *= scalar; y *= scalar; }
