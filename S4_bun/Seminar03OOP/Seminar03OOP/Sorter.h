#pragma once
#include<vector>
#include "Auto.h"
#include <algorithm>
#include "Utils.h"

class Sorter {
	public:
		virtual void sort(std::vector<Auto> &autos) = 0;
};
