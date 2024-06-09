#pragma once
#ifndef CGRAPHICALDISPLAY_H
#define CGRAPHICALDISPLAY_H

#include "CDisplay.h"
#include <vector>
#include <iostream>
#include <algorithm> 

/* @brief Klasa GraphicalDisplay
 * @details Klasa dziedzicz¹ca po klasie Display, która posiada metody drawTriangle, drawCircle oraz drawParallelogram
 */
class GraphicalDisplay : public Display
{
public:
    /* @brief Konstruktor klasy GraphicalDisplay
    */
    GraphicalDisplay();
    /* @brief Metoda drawTriangle rysuj¹ca trójk¹t
	 * @param a1 wspó³rzêdna x pierwszego wierzcho³ka
	 * @param a2 wspó³rzêdna y pierwszego wierzcho³ka
	 * @param b1 wspó³rzêdna x drugiego wierzcho³ka
	 * @param b2 wspó³rzêdna y drugiego wierzcho³ka
	 */
    void drawTriangle(int a1, int a2, int b1, int b2) override;
    /* @brief Metoda drawCircle rysuj¹ca ko³o
    * @param r promieñ ko³a
    */
    void drawCircle(int r) override;
    /* @brief Metoda drawParallelogram rysuj¹ca równoleg³obok
    * @param a1 wspó³rzêdna x pierwszego wierzcho³ka
    * @param a2 wspó³rzêdna y pierwszego wierzcho³ka
    * @param b1 wspó³rzêdna x drugiego wierzcho³ka
    * @param b2 wspó³rzêdna y drugiego wierzcho³ka
	*/
    void drawParallelogram(int a1, int a2, int b1, int b2) override;
};
#endif // !CGRAPHICALDISPLAY_H
