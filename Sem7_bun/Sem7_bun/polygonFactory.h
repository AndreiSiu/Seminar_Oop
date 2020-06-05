#pragma once
#include "polygon.h"
#include "Triangle.h"
#include "Square.h"
#include "Pentagon.h"

class polygonFactory
{
public:
	polygon* getPolygon(int p);
};

