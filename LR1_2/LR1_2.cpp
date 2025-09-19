#include "Point.h"
#include <iostream>
#include <clocale>
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    Point p1;
    p1.print();
    cout << p1.distance() << "\n";
    Point p2(3, 4);
    p2.print();
    cout << p2.distance() << "\n";
    p2.move(1, 2);
    p2.print();
    p2.multiply(2);
    p2.print();
    p1.setX(5);
    p1.setY(6);
    p1.print();
    cout << p1.getX() << "," << p1.getY() << "\n";
}