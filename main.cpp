#include <iostream>
#include "modules/shape/Shape.h"
#include "modules/cs/CS1.h"
#include "modules/shape/Rectangle.h"
#include "modules/drawing/CS1Drawing.h"
#include "modules/drawing/CS2Drawing.h"
#include "modules/shape/Circle.h"

int main() {
    Rectangle rectangle1(new CS1Drawing);
    rectangle1.Draw();
    std::cout << "\n";

    Rectangle rectangle2(new CS2Drawing);
    rectangle2.Draw();
    std::cout << "\n";

    Circle circle1(new CS1Drawing);
    circle1.Draw();
    std::cout << "\n";

    Circle circle2(new CS2Drawing);
    circle2.Draw();
    std::cout << "\n";

    return 0;
}
