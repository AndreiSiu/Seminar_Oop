#include "pch.h"
#include "PKW.h"


PKW::PKW()
{
}

PKW::PKW(int id, std::string marke, std::string modell,
	std::string sonder) {
	this->id = id;
	this->marke = marke;
	this->modell = modell;
	this->Sonderausstattungen = sonder;
}

PKW::~PKW()
{
}
