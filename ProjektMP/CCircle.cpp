#include "CCircle.h"

Circle::Circle(Display* w, int r) : Shape(w), radius(r) {}

void Circle::draw() {
    display->drawCircle(radius);
}
