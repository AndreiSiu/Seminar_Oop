#include "StandardSorter.h"

void StandardSorter::sort(std::vector<Auto> &autos) {
	std::sort(autos.begin(), autos.end(), sort_by_marke());
}
