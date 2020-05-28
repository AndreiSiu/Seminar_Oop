#include "BubbleSorter.h"

void BubbleSorter::sort(std::vector<Auto> &autos) {
	for (int i = 0; i < autos.size(); i++) {
		for (int j = i + 1; j < autos.size(); j++) {
			if (autos[i].GetMarke().compare(autos[j].GetMarke()) > 0) {
				Auto temp = autos[i];
				autos[i] = autos[j];
				autos[j] = temp;
			}
		}
	}
}