#include "Shape.h"

Shape::Shape(Drawing *drawing) : drawing(drawing) {}

void Shape::DrawLine(int x1, int y1, int x2, int y2) {
    drawing->DrawLine(x1, y1, x2, y2);
}

void Shape::DrawCircle(int x, int y, int r) {
    drawing->DrawCircle(x, y, r);
}
