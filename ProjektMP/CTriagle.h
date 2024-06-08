#ifndef CTRIANGLE_H
#define CTRIANGLE_H

#include "CDisplay.h"

class Triangle : public Display
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

