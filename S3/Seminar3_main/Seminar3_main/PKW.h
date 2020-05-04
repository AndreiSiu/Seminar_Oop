#pragma once
#include "Auto.h"
#include <string>
class PKW :
	public Auto
{

	public:

		std::string Sonderausstattungen;

		PKW();

		PKW(int id, std::string marke, std::string modell,
			std::string sonder);

		~PKW();
};

