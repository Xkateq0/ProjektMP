#include "CComplexShape.h"

ComplexShape::ComplexShape(Display* w) : Shape(w) {}

bool ComplexShape::add(Shape* o) {
    if (shapes.size() < 5) {
        shapes.push_back(o);
        return true;
    }
    return false;
}

void ComplexShape::draw() {
    for (Shape* shape : shapes) {
        shape->draw();
    }
}