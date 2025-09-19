#ifndef POINT_H
#define POINT_H
class Point {
private:
    int x;
    int y;
public:
    Point();
    Point(int x, int y);
    void print() const;
    double distance() const;
    void move(int a, int b);
    int getX() const;
    int getY() const;
    void setX(int value);
    void setY(int value);
    void multiply(int scalar);
};
#endif