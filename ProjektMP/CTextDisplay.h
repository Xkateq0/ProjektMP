#pragma once
#ifndef CTEXTDISPLAY_H
#define CTEXTDISPLAY_H

#include "CDisplay.h"
#include <iostream>

class TextDisplay : public Display
{
public:
    void drawTriangle(int a1, int a2, int b1, int b2) override;
    void drawCircle(int r) override;
    void drawParallelogram(int a1, int a2, int b1, int b2) override;
};

#endif // !CTEXTDISPLAY_H

