#ifndef CPARALLELOGRAM_H
#define CPARALLELOGRAM_H

#include "CShape.h"
/* @brief Parallelogram to klasa reprezentuj�ca r�wnoleg�obok
*/
class Parallelogram : public Shape
{
	private:
	// wsp�rz�dne wierzcho�k�w r�wnoleg�oboku
	int a1;
	int a2;
	int b1;
	int b2;
	public:
		/* @brief Konstruktor klasy Parallelogram
		* @param w wska�nik na obiekt klasy Display
		* @param a1 wsp�rz�dna x pierwszego wierzcho�ka
		* @param a2 wsp�rz�dna y pierwszego wierzcho�ka
		* @param b1 wsp�rz�dna x drugiego wierzcho�ka
		* @param b2 wsp�rz�dna y drugiego wierzcho�ka
		*/
		Parallelogram(Display*w, int a1, int a2, int b1, int b2);
		/* @brief Metoda draw rysuj�ca r�wnoleg�obok
		*/
		void draw() override;
};
#endif // !CPARALLELOGRAM_H

