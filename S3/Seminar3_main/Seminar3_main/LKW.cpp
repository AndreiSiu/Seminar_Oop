#include "pch.h"
#include "LKW.h"


LKW::LKW()
{
}

LKW::LKW(int id, std::string marke, std::string modell,
	int gewicht, std::string bez) {

	this->id = id;
	this->marke = marke;
	this->modell = modell;
	this->Gesamtgewicht = gewicht;
	this->Bezeichnung = bez;

}

void LKW::load(int x) {
	if (x > 0)
		this->Gesamtgewicht += x;
	else
		std::cout << "Marfa cant be negative\n";
}

void LKW::unload(int x) {
	if (this->Gesamtgewicht - x >= 0)
		this->Gesamtgewicht -= x;
	else
		std::cout << "Marfa cant be negative\n";
}

void LKW::show_Gesamtgewicht() {
	std::cout << this->Gesamtgewicht << '\n';
}

LKW::~LKW()
{
}
