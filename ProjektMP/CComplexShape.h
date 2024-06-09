#ifndef COMPLEXSHAPE_H
#define COMPLEXSHAPE_H

#include "CShape.h"
#include <vector>
/* @brief ComplexShapie to klasa, która agreguje wiele obiektów typu Shape
 * @details Klasa dziedziczy po Shape, a tak¿e posiada wektor wskaŸników na obiekty typu Shape
 * @details Klasa posiada metody add, draw oraz destruktor
 */
class ComplexShape : public Shape {
private:
    // wektor wskaŸników na obiekty typu Shape
    std::vector<Shape*> shapes;
public:
    /* @brief Konstruktor klasy ComplexShape
	 * @param w wskaŸnik na obiekt typu Display
	 */
    ComplexShape(Display* w);
    
    /* @brief Metoda add dodaj¹ca obiekt typu Shape do wektora shapes
    * @param o wskaŸnik na obiekt typu Shape
    * @return true jeœli dodanie obiektu do wektora siê powiod³o, false w przeciwnym wypadku
	*/
    bool add(Shape* o);
    /* @brief Metoda draw rysuj¹ca wszystkie obiekty typu Shape z wektora shapes
    */
    void draw() override;
    /* @brief Destruktor klasy ComplexShape
	*/
    ~ComplexShape();
};

#endif // COMPLEXSHAPE_H#
