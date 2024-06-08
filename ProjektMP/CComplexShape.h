#ifndef COMPLEXSHAPE_H
#define COMPLEXSHAPE_H

#include "CShape.h"
#include <vector>

class ComplexShape : public Shape {
private:
    std::vector<Shape*> shapes;
public:
    ComplexShape(Display* w);
    bool add(Shape* o);
    void draw() override;
};

#endif // COMPLEXSHAPE_H#
