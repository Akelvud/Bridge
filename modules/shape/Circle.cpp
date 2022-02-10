#include "Circle.h"

Circle::Circle(Drawing* drawing) : Shape(drawing) {}

void Circle::Draw() {
    DrawCircle(5, 5, 5);
}
