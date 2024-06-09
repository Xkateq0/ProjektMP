#include "CTextDisplay.h"
#include "LibExceptions.h"
void TextDisplay::drawTriangle(int a1, int a2, int b1, int b2)
{
	if ((float)a1 / b1 == (float)a2 / b2) throw InvalidArgument("Wektor a i b nie s¹ liniowo niezale¿ne");
	std::cout << "Drawing a triangle from vectors( " << a1 << " , " << a2 << " ) , ( " << b1 << " , " << b2 << " )." << std::endl;
}

void TextDisplay::drawCircle(int r)
{
	if (r < 0)
	{
		throw InvalidArgument("Promieñ ko³a nie mo¿e byæ ujemny");
	}
	std::cout << "Drawing a circle with radius " << r << "." <<std::endl;
}

void TextDisplay::drawParallelogram(int a1, int a2, int b1, int b2)
{
	if ((float)a1 / b1 == (float)a2 / b2) throw InvalidArgument("Wektor a i b nie s¹ liniowo niezale¿ne");
	std::cout << "Drawing a parallelogram from vectors ( " << a1 << " , " << a2 << " ) , ( " << b1 << " , " << b2 << " )." << std::endl;
}


