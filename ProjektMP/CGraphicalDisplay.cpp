#include "CGraphicalDisplay.h"


GraphicalDisplay::GraphicalDisplay(int w, int h) : width(w), height(h) {
    canvas = std::vector<std::vector<char>>(height, std::vector<char>(width, ' '));
}

void GraphicalDisplay::drawTriangle(int a1, int a2, int b1, int b2) {
    if (a1 >= 0 && a1 < width && a2 >= 0 && a2 < height) {
        canvas[a2][a1] = 't';
    }
    if (b1 >= 0 && b1 < width && b2 >= 0 && b2 < height) {
        canvas[b2][b1] = 't';
    }
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


void GraphicalDisplay::drawParallelogram(int a1, int a2, int b1, int b2) {
    // Okreœlenie granic
    int minX = std::min({ 0, a1, a1 + b1, b1 });
    int maxX = std::max({ 0, a1, a1 + b1, b1 });
    int minY = std::min({ 0, a2, a2 + b2, b2 });
    int maxY = std::max({ 0, a2, a2 + b2, b2 });

    // Rysowanie równoleg³oboku
    for (int y = maxY; y >= minY; y--) {
        for (int x = minX; x <= maxX; x++) {
            if ((x == 0 && y == 0) || (x == a1 && y == a2) || (x == a1 + b1 && y == a2 + b2) || (x == b1 && y == b2))
                std::cout << "p ";
            else if ((x == 0 && y == a2) || (x == b1 && y == 0))
                std::cout << "  ";
            else if ((x < a1 && x > b1) && (y > a2 && y < b2))
                std::cout << "p ";
            else
                std::cout << "  ";
        }
        std::cout << std::endl;
    }
}

void GraphicalDisplay::display() const {
    for (const auto& row : canvas) {
        for (char pixel : row) {
            std::cout << pixel;
        }
        std::cout << std::endl;
    }
}

