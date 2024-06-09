#ifndef CTRIANGLE_H
#define CTRIANGLE_H

#include "CShape.h"

/* Triangle to klasa reprezentuj�ca tr�jk�t, dziedzicz�ca po klasie Shape
 * Klasa posiada pola a1, a2, b1, b2, kt�re reprezentuj� wsp�rz�dne tr�jk�ta
 * Klasa posiada wska�nik na obiekt klasy Display, kt�ry reprezentuje wy�wietlacz
 * Klasa posiada konstruktor, kt�ry przyjmuje wska�nik na obiekt klasy Display oraz wsp�rz�dne tr�jk�ta
 * Klasa posiada metod� draw, kt�ra rysuje tr�jk�t na wy�wietlaczu
 */
template<typename T>
class Triangle : public Shape
{
	private:
	// wsp�rz�dne tr�jk�ta
	T a1;
	T a2;
	T b1;
	T b2;
	public:
		/* @brief Konstruktor klasy Triangle
		 * @param w wska�nik na obiekt klasy Display
		 * @param a1 wsp�rz�dna x pierwszego wierzcho�ka tr�jk�ta
		 * @param a2 wsp�rz�dna y pierwszego wierzcho�ka tr�jk�ta
		 * @param b1 wsp�rz�dna x drugiego wierzcho�ka tr�jk�ta
		 * @param b2 wsp�rz�dna y drugiego wierzcho�ka tr�jk�ta
		*/
		Triangle(Display* w, T a1, T a2, T b1, T b2) : Shape(w), a1(a1), a2(a2), b1(b1), b2(b2) {}
		/* @brief Metoda draw rysuj�ca tr�jk�t na wy�wietlaczu
		*/
		void draw() override {
			display->drawTriangle(a1, a2, b1, b2);
		}
};
#endif // !CTRIANGLE_H

