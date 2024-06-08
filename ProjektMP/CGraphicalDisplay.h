#pragma once
#ifndef CGRAPHICALDISPLAY_H
#define CGRAPHICALDISPLAY_H

#include "CDisplay.h"
#include <vector>
#include <iostream>
#include <algorithm> 

class GraphicalDisplay : public Display
{
private:
    std::vector<std::vector<char>> canvas; 
    int width; 
    int height; 
public:
    GraphicalDisplay(int w, int h);
    void drawTriangle(int a1, int a2, int b1, int b2) override;
    void drawCircle(int r) override;
    void drawParallelogram(int a1, int a2, int b1, int b2) override;
    void display() const;
};
#endif // !CGRAPHICALDISPLAY_H

