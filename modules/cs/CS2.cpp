#include "CS2.h"

std::ostream &operator<<(std::ostream& stream, Point point) {
    stream << "Point(" << point.x << "," << point.y << ")";
    return stream;
}

void CS2::DrawLine(Point p1, Point p2) {
    std::cout << "CS2.DrawLine(" << p1 << ", " << p2 << ");\n";
}

void CS2::DrawCircle(Point center, int r) {
    std::cout << "CS2.DrawCircle(" << center << ", " << r << ");\n";
}

