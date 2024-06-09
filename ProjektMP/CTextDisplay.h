#pragma once
#ifndef CTEXTDISPLAY_H
#define CTEXTDISPLAY_H

#include "CDisplay.h"
#include <iostream>

/* @brief Klasa TextDisplay
 * @details Klasa dziedzicz¹ca po klasie Display, która posiada metody drawTriangle, drawCircle oraz drawParallelogram
 */
class TextDisplay : public Display
{
public:
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

#endif // !CTEXTDISPLAY_H

