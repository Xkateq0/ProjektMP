#ifndef CTRIANGLE_H
#define CTRIANGLE_H

#include "CShape.h"

/* Triangle to klasa reprezentuj¹ca trójk¹t, dziedzicz¹ca po klasie Shape
 * Klasa posiada pola a1, a2, b1, b2, które reprezentuj¹ wspó³rzêdne trójk¹ta
 * Klasa posiada wskaŸnik na obiekt klasy Display, który reprezentuje wyœwietlacz
 * Klasa posiada konstruktor, który przyjmuje wskaŸnik na obiekt klasy Display oraz wspó³rzêdne trójk¹ta
 * Klasa posiada metodê draw, która rysuje trójk¹t na wyœwietlaczu
 */
template<typename T>
class Triangle : public Shape
{
	private:
	// wspó³rzêdne trójk¹ta
	T a1;
	T a2;
	T b1;
	T b2;
	public:
		/* @brief Konstruktor klasy Triangle
		 * @param w wskaŸnik na obiekt klasy Display
		 * @param a1 wspó³rzêdna x pierwszego wierzcho³ka trójk¹ta
		 * @param a2 wspó³rzêdna y pierwszego wierzcho³ka trójk¹ta
		 * @param b1 wspó³rzêdna x drugiego wierzcho³ka trójk¹ta
		 * @param b2 wspó³rzêdna y drugiego wierzcho³ka trójk¹ta
		*/
		Triangle(Display* w, T a1, T a2, T b1, T b2) : Shape(w), a1(a1), a2(a2), b1(b1), b2(b2) {}
		/* @brief Metoda draw rysuj¹ca trójk¹t na wyœwietlaczu
		*/
		void draw() override {
			display->drawTriangle(a1, a2, b1, b2);
		}
};
#endif // !CTRIANGLE_H

