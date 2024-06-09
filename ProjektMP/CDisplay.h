#pragma once
#ifndef CDISPLAY_H
#define CDISPLAY_H

/* @brief Klasa Display
 * @details Klasa abstrakcyjna, która posiada metody drawTriangle, drawCircle oraz drawParallelogram
 */
class Display
{
public:
	/* @brief Metoda drawTriangle rysuj¹ca trójk¹t
	 * @param a1 wspó³rzêdna x pierwszego wierzcho³ka
	 * @param a2 wspó³rzêdna y pierwszego wierzcho³ka
	 * @param b1 wspó³rzêdna x drugiego wierzcho³ka
	 * @param b2 wspó³rzêdna y drugiego wierzcho³ka
	 */
	virtual void drawTriangle(int a1, int a2, int b1, int b2)=0;

	/* @brief Metoda drawCircle rysuj¹ca ko³o
	 * @param r promieñ ko³a
	 */
	virtual void drawCircle(int r)=0;

	/* @brief Metoda drawParallelogram rysuj¹ca równoleg³obok
	 * @param a1 wspó³rzêdna x pierwszego wierzcho³ka
	 * @param a2 wspó³rzêdna y pierwszego wierzcho³ka
	 * @param b1 wspó³rzêdna x drugiego wierzcho³ka
	 * @param b2 wspó³rzêdna y drugiego wierzcho³ka
	 */
	virtual void drawParallelogram(int a1, int a2, int b1, int b2)=0;

	/* @brief Wirtualny destruktor klasy Display
	 */
	virtual ~Display() = default;
};
#endif // !CDISPLAY_H
