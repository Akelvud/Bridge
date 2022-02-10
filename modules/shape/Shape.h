#pragma once

#include "../drawing/Drawing.h"

class Shape {
public:
    Shape(Drawing*);
    virtual void Draw() = 0;

protected:
    void DrawLine(int, int, int, int);
    void DrawCircle(int, int, int);
    Drawing* drawing;
};



