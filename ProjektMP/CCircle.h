#ifndef CCIRCLE_H
#define CCIRCLE_H

#include "CShape.h"
class Circle : public Shape {
private:
    int radius;
public:
    Circle(Display* w, int r);
    void draw() override;
};
#endif // !CCIRCLE_H

