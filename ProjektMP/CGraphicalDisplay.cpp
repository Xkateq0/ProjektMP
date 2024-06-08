#include "CGraphicalDisplay.h"


GraphicalDisplay::GraphicalDisplay(int w, int h) : width(w), height(h) {
    canvas = std::vector<std::vector<char>>(height, std::vector<char>(width, ' '));
}

void GraphicalDisplay::drawTriangle(int a1, int a2, int b1, int b2) {
    int minX = std::min({ 0, a1, b1});
    int minY = std::min({ 0, a2, b2});
    int maxX = std::max({ 0, a1, b1});
    int maxY = std::max({ 0, a2, b2});

    for (int y = maxY; y >= minY; --y) {
        for (int x = minX; x <= maxX; ++x) {
            int dotProductaa = a1 * a1 + a2 * a2;
            int dotProductbb = b1 * b1 + b2 * b2;
            int dotProductab = a1 * b1 + a2 * b2;
            int dotProductap = a1 * x + a2 * y;
            int dotProductbp = b1 * x + b2 * y;
            float denominator = dotProductaa * dotProductbb - dotProductab * dotProductab;
            if (denominator == 0) {
				continue;
			}
            float s = (dotProductbb * dotProductap - dotProductab * dotProductbp) / denominator;
			float t = (dotProductaa * dotProductbp - dotProductab * dotProductap) / denominator;
			if (s >= 0 && t >= 0 && s + t <= 1) {
				canvas[maxY - y][x - minX] = 't';
			}
        }
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
    int c1 = a1 + b1;
    int c2 = a2 + b2;
    int size = canvas.size() / 2;
    int minX = std::min({ 0, a1, b1, c1 });
    int minY = std::min({ 0, a2, b2, c2 });
    int maxX = std::max({ 0, a1, b1, c1 });
    int maxY = std::max({ 0, a2, b2, c2 });

    for (int y = maxY; y >= minY; --y) {
        for (int x = minX; x <= maxX; ++x) {
            float s = (float)(x * b2 - y * b1) / (a1 * b2 - a2 * b1);
            float t = (float)(a1 * y - a2 * x) / (a1 * b2 - a2 * b1);
            if (s >= 0 && s <= 1 && t >= 0 && t <= 1) {
                canvas[maxY - y][x - minX] = 'p';
            }
        }
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

