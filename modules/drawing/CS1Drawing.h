#pragma once

#include "Drawing.h"
#include "../cs/CS1.h"

class CS1Drawing: public Drawing {
public:
    void DrawLine(int, int, int, int);
    void DrawCircle(int, int, int);

private:
    CS1 cs1;
};






