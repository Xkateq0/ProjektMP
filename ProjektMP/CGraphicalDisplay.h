#pragma once
#ifndef CGRAPHICALDISPLAY_H
#define CGRAPHICALDISPLAY_H

#include "CDisplay.h"
#include <vector>
#include <iostream>
#include <algorithm> 

/* @brief Klasa GraphicalDisplay
 * @details Klasa dziedzicz�ca po klasie Display, kt�ra posiada metody drawTriangle, drawCircle oraz drawParallelogram
 */
class GraphicalDisplay : public Display
{
public:
    /* @brief Konstruktor klasy GraphicalDisplay
    */
    GraphicalDisplay();
    /* @brief Metoda drawTriangle rysuj�ca tr�jk�t
	 * @param a1 wsp�rz�dna x pierwszego wierzcho�ka
	 * @param a2 wsp�rz�dna y pierwszego wierzcho�ka
	 * @param b1 wsp�rz�dna x drugiego wierzcho�ka
	 * @param b2 wsp�rz�dna y drugiego wierzcho�ka
	 */
    void drawTriangle(int a1, int a2, int b1, int b2) override;
    /* @brief Metoda drawCircle rysuj�ca ko�o
    * @param r promie� ko�a
    */
    void drawCircle(int r) override;
    /* @brief Metoda drawParallelogram rysuj�ca r�wnoleg�obok
    * @param a1 wsp�rz�dna x pierwszego wierzcho�ka
    * @param a2 wsp�rz�dna y pierwszego wierzcho�ka
    * @param b1 wsp�rz�dna x drugiego wierzcho�ka
    * @param b2 wsp�rz�dna y drugiego wierzcho�ka
	*/
    void drawParallelogram(int a1, int a2, int b1, int b2) override;
};
#endif // !CGRAPHICALDISPLAY_H
