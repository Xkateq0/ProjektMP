#ifndef CPARALLELOGRAM_H
#define CPARALLELOGRAM_H

#include "CShape.h"
/* @brief Parallelogram to klasa reprezentuj¹ca równoleg³obok
*/
class Parallelogram : public Shape
{
	private:
	// wspó³rzêdne wierzcho³ków równoleg³oboku
	int a1;
	int a2;
	int b1;
	int b2;
	public:
		/* @brief Konstruktor klasy Parallelogram
		* @param w wskaŸnik na obiekt klasy Display
		* @param a1 wspó³rzêdna x pierwszego wierzcho³ka
		* @param a2 wspó³rzêdna y pierwszego wierzcho³ka
		* @param b1 wspó³rzêdna x drugiego wierzcho³ka
		* @param b2 wspó³rzêdna y drugiego wierzcho³ka
		*/
		Parallelogram(Display*w, int a1, int a2, int b1, int b2);
		/* @brief Metoda draw rysuj¹ca równoleg³obok
		*/
		void draw() override;
};
#endif // !CPARALLELOGRAM_H

