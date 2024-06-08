#include "CGraphicalDisplay.h"

GraphicalDisplay::GraphicalDisplay(int w, int h) : width(w), height(h) {
    canvas = std::vector<std::vector<char>>(height, std::vector<char>(width, ' '));
}

void GraphicalDisplay::drawTriangle(int a1, int a2, int b1, int b2)
{
}

void GraphicalDisplay::drawCircle(int r)
{
    for (int y = -r; y <= r; ++y) {
        for (int x = -r; x <= r; ++x) {
            if (x * x + y * y <= r * r) {
                int posX = r + x;
                int posY = r + y;
                if (posX >= 0 && posX < width && posY >= 0 && posY < height) {
                    canvas[posY][posX] = 'c';
                }
            }
        }
    }
}

void GraphicalDisplay::drawParallelogram(int a1, int a2, int b1, int b2)
{
}

void GraphicalDisplay::display() const {
    for (const auto& row : canvas) {
        for (char pixel : row) {
            std::cout << pixel;
        }
        std::cout << std::endl;
    }
}

