#ifndef CPARALLELOGRAM_H
#define CPARALLELOGRAM_H

#include "CShape.h"

class Parallelogram : public Shape
{
	private:
	int a1;
	int a2;
	int b1;
	int b2;
	public:
		Parallelogram(Display*w, int a1, int a2, int b1, int b2);
		void draw() override;
};
#endif // !CPARALLELOGRAM_H

