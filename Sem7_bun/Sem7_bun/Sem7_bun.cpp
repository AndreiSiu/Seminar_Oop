#include "polygonFactory.h"
#include <iostream>

int main()
{
	polygonFactory pf;
	int p = 3;
	polygon* t = pf.getPolygon(p);

	std::cout << t->getType();
	delete t;

	return 0;
}