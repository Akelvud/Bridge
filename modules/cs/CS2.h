#pragma once
#include <ostream>
#include <iostream>

struct Point {
    Point(int x, int y) : x(x), y(y) {}
    int x = 0;
    int y = 0;
};

class CS2 {
public:
    void DrawLine(Point, Point);
    void DrawCircle(Point, int);
};
