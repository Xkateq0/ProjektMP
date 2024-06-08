#pragma once

#ifndef CSHAPE_H
#define CSHAPE_H

#include "CDisplay.h"
class Shape {
protected:
    Display* display;
public:
    Shape(Display* w) : display(w) {}
    virtual void draw() = 0;
    void changeDisplay(Display* newDisplay) {
        display = newDisplay;
    }
};
#endif // !CSHAPE_H

