#pragma once

#include "Drawing.h"
#include "../cs/CS2.h"

class CS2Drawing: public Drawing {
public:
    void DrawLine(int, int, int, int);
    void DrawCircle(int, int, int);

private:
    CS2 cs2;
};



