#pragma once

#ifndef CSHAPE_H
#define CSHAPE_H

#include "CDisplay.h"
/* @brief Shape to klasa bazowa dla kszta³tów, które maj¹ byæ rysowane na ekranie.
 * 
 * Klasa ta posiada wskaŸnik na obiekt klasy Display, która jest odpowiedzialna za rysowanie kszta³tów.
*/
class Shape {
protected:
    // wskaŸnik na obiekt klasy Display
    Display* display;
public:
    /* @brief Konstruktor klasy Shape
    */
    Shape(Display* w) : display(w) {}
    /* @brief Metoda draw rysuj¹ca kszta³t
	*/
    virtual void draw() = 0;
    /* @brief Metoda changeDisplay zmieniaj¹ca wskaŸnik na obiekt klasy Display
    * @param newDisplay wskaŸnik na nowy obiekt klasy Display
    */
    void changeDisplay(Display* newDisplay);
    /* @brief Wirtualny destruktor klasy Shape
    */
    virtual ~Shape() = default;
};
#endif // !CSHAPE_H

