#include "polygonFactory.h"

polygon* polygonFactory::getPolygon(int p)
{
	switch (p)
	{
	case 3:
		return new Triangle;
		break;

	case 4:
		return new Square;
		break;

	case 5:
		return new Pentagon;
		break;

	default:
		return nullptr;
		break;
	}

	/*
	if (p == 3)
		return new Triangle;

	if (p == 4)
		return new Square;

	if (p == 5)
		return new Pentagon;

	return nullptr;
	*/
}
