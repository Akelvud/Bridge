#include "CS1Drawing.h"

void CS1Drawing::DrawLine(int x1, int y1, int x2, int y2){
    cs1.draw_a_line(x1, y1, x2, y2);
}
void CS1Drawing::DrawCircle(int x, int y, int r) {
    cs1.draw_a_circle(x, y, r);
}