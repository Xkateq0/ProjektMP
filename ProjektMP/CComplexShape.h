#ifndef COMPLEXSHAPE_H
#define COMPLEXSHAPE_H

#include "CShape.h"
#include <vector>
/* @brief ComplexShapie to klasa, kt�ra agreguje wiele obiekt�w typu Shape
 * @details Klasa dziedziczy po Shape, a tak�e posiada wektor wska�nik�w na obiekty typu Shape
 * @details Klasa posiada metody add, draw oraz destruktor
 */
class ComplexShape : public Shape {
private:
    // wektor wska�nik�w na obiekty typu Shape
    std::vector<Shape*> shapes;
public:
    /* @brief Konstruktor klasy ComplexShape
	 * @param w wska�nik na obiekt typu Display
	 */
    ComplexShape(Display* w);
    
    /* @brief Metoda add dodaj�ca obiekt typu Shape do wektora shapes
    * @param o wska�nik na obiekt typu Shape
    * @return true je�li dodanie obiektu do wektora si� powiod�o, false w przeciwnym wypadku
	*/
    bool add(Shape* o);
    /* @brief Metoda draw rysuj�ca wszystkie obiekty typu Shape z wektora shapes
    */
    void draw() override;
    /* @brief Destruktor klasy ComplexShape
	*/
    ~ComplexShape();
};

#endif // COMPLEXSHAPE_H#
