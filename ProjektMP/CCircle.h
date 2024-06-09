#ifndef CCIRCLE_H
#define CCIRCLE_H

#include "CShape.h"
/* Circle to klasa reprezentuj�ca ko�o, dziedziczy po klasie Shape 
*/
class Circle : public Shape {
private:
    // promie� ko�a
    int radius;
public:
    /* @brief Konstruktor klasy Circle
    */
    Circle(Display* w, int r);
    /* @brief Metoda draw rysuj�ca ko�o
	*/
    void draw() override;
};
#endif // !CCIRCLE_H

