#include "CS2Drawing.h"

void CS2Drawing::DrawLine(int x1, int y1, int x2, int y2) {
    cs2.DrawLine(Point(x1, y1), Point(x2, y2));
}

void CS2Drawing::DrawCircle(int x, int y, int r) {
    cs2.DrawCircle(Point(x, y), r);
}