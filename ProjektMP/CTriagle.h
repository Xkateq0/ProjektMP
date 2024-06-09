#ifndef CTRIANGLE_H
#define CTRIANGLE_H

#include "CShape.h"

class Triangle : public Shape
{
	private:
	int a1;
	int a2;
	int b1;
	int b2;
	Display* w;
	public:
		Triangle(Display*w, int a1, int a2, int b1, int b2);
		void draw() override;
};
#endif // !CTRIANGLE_H

