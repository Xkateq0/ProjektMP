#pragma once
#ifndef CDISPLAY_H
#define CDISPLAY_H

/* @brief Klasa Display
 * @details Klasa abstrakcyjna, kt�ra posiada metody drawTriangle, drawCircle oraz drawParallelogram
 */
class Display
{
public:
	/* @brief Metoda drawTriangle rysuj�ca tr�jk�t
	 * @param a1 wsp�rz�dna x pierwszego wierzcho�ka
	 * @param a2 wsp�rz�dna y pierwszego wierzcho�ka
	 * @param b1 wsp�rz�dna x drugiego wierzcho�ka
	 * @param b2 wsp�rz�dna y drugiego wierzcho�ka
	 */
	virtual void drawTriangle(int a1, int a2, int b1, int b2)=0;

	/* @brief Metoda drawCircle rysuj�ca ko�o
	 * @param r promie� ko�a
	 */
	virtual void drawCircle(int r)=0;

	/* @brief Metoda drawParallelogram rysuj�ca r�wnoleg�obok
	 * @param a1 wsp�rz�dna x pierwszego wierzcho�ka
	 * @param a2 wsp�rz�dna y pierwszego wierzcho�ka
	 * @param b1 wsp�rz�dna x drugiego wierzcho�ka
	 * @param b2 wsp�rz�dna y drugiego wierzcho�ka
	 */
	virtual void drawParallelogram(int a1, int a2, int b1, int b2)=0;

	/* @brief Wirtualny destruktor klasy Display
	 */
	virtual ~Display() = default;
};
#endif // !CDISPLAY_H
