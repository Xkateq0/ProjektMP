#pragma once

#ifndef CSHAPE_H
#define CSHAPE_H

#include "CDisplay.h"
/* @brief Shape to klasa bazowa dla kszta�t�w, kt�re maj� by� rysowane na ekranie.
 * 
 * Klasa ta posiada wska�nik na obiekt klasy Display, kt�ra jest odpowiedzialna za rysowanie kszta�t�w.
*/
class Shape {
protected:
    // wska�nik na obiekt klasy Display
    Display* display;
public:
    /* @brief Konstruktor klasy Shape
    */
    Shape(Display* w) : display(w) {}
    /* @brief Metoda draw rysuj�ca kszta�t
	*/
    virtual void draw() = 0;
    /* @brief Metoda changeDisplay zmieniaj�ca wska�nik na obiekt klasy Display
    * @param newDisplay wska�nik na nowy obiekt klasy Display
    */
    void changeDisplay(Display* newDisplay);
    /* @brief Wirtualny destruktor klasy Shape
    */
    virtual ~Shape() = default;
};
#endif // !CSHAPE_H

