#ifndef CCIRCLE_H
#define CCIRCLE_H

#include "CShape.h"
/* Circle to klasa reprezentuj¹ca ko³o, dziedziczy po klasie Shape 
*/
class Circle : public Shape {
private:
    // promieñ ko³a
    int radius;
public:
    /* @brief Konstruktor klasy Circle
    */
    Circle(Display* w, int r);
    /* @brief Metoda draw rysuj¹ca ko³o
	*/
    void draw() override;
};
#endif // !CCIRCLE_H

