#include "CGraphicalDisplay.h"
#include "LibExceptions.h"


GraphicalDisplay::GraphicalDisplay() {}

void GraphicalDisplay::drawTriangle(int a1, int a2, int b1, int b2) {
    if ((float)a1 / b1 == (float)a2 / b2) throw InvalidArgument("Wektor a i b nie s¹ liniowo niezale¿ne");
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
				std::cout<< "t";
            }
            else {
                std::cout<<" ";
            }
        }
        std::cout<<std::endl;
    }
    std::cout << std::endl;
}

void GraphicalDisplay::drawCircle(int r)
{
    if(r<0)
	{
		throw InvalidArgument("Promieñ ko³a nie mo¿e byæ ujemny");
	}
    int width = 2 * r + 1;
    int height = 2 * r + 1;
    for (int y = -r; y <= r; ++y) {
        for (int x = -r; x <= r; ++x) {
            if (x * x + y * y <= r * r) {
                int posX = r + x;
                int posY = r + y;
                if (posX >= 0 && posX < width && posY >= 0 && posY < height) {
                    std::cout << "c";
                }
            }
			else {
				std::cout << " ";
        }
		}
        std::cout << std::endl;
    }
    std::cout << std::endl;
}


void GraphicalDisplay::drawParallelogram(int a1, int a2, int b1, int b2) {
    if((float)a1/ b1 == (float)a2 / b2) throw InvalidArgument("Wektor a i b nie s¹ liniowo niezale¿ne");
    int c1 = a1 + b1;
    int c2 = a2 + b2;
    int minX = std::min({ 0, a1, b1, c1 });
    int minY = std::min({ 0, a2, b2, c2 });
    int maxX = std::max({ 0, a1, b1, c1 });
    int maxY = std::max({ 0, a2, b2, c2 });

    for (int y = maxY; y >= minY; --y) {
        for (int x = minX; x <= maxX; ++x) {
            float s = (float)(x * b2 - y * b1) / (a1 * b2 - a2 * b1);
            float t = (float)(a1 * y - a2 * x) / (a1 * b2 - a2 * b1);
            if (s >= 0 && s <= 1 && t >= 0 && t <= 1) {
                std::cout << "p";
            }
			else {
				std::cout << " ";
			}
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}


