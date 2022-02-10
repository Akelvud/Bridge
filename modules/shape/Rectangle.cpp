#include "Rectangle.h"
Rectangle::Rectangle(Drawing* drawing) : Shape(drawing) {}

void Rectangle::Draw() {
    DrawLine(0, 0, 0, 10);
    DrawLine(0, 10, 10, 10);
    DrawLine(10, 10, 10, 0);
    DrawLine(10, 0, 0, 0);
}
