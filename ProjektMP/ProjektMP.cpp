// ProjektMP.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "CDisplay.h"
#include "CGraphicalDisplay.h"
#include "CTextDisplay.h"
#include "CShape.h"
#include "CTriagle.h"
#include "CParallelogram.h"
#include "CCircle.h"
#include "CComplexShape.h"
#include "LibExceptions.h"

int main()
{
    try {
        Display* w1 = new GraphicalDisplay();
        Display* w2 = new TextDisplay();
        Shape* o1 = new Triangle<int>(w1, 3, 2, 2, -2);
        Shape* o2 = new Parallelogram(w1, 3, 2, 2, -2);
        Shape* o3 = new Circle(w1, 5);
        ComplexShape* o4 = new ComplexShape(w1);
        o4->add(o1);
        o4->add(o2);
        o4->add(o3);
        o4->draw();
        o1->draw();
        o2->draw();
        o3->draw();
        o1->changeDisplay(w2);
        o2->changeDisplay(w2);
        o3->changeDisplay(w2);
        o4->changeDisplay(w2);
        o4->draw();
        o1->draw();
        o2->draw();
        o3->draw();
        delete o1;
        delete o2;
        delete o3;
        delete o4;
        delete w2;
        delete w1;
        return 0;
    }
    catch (const MyExceptions& e) {
		std::cerr << e.what() << std::endl;
		return 1;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
		return 2;
	}
	catch (...) {
		std::cerr << "Nieznany wyjatek" << std::endl;
		return 3;
	}
}
