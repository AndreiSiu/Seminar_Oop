#pragma once
#include "Auto.h"
#include <string>
#include <iostream>
class LKW :
	public Auto
{
public:
	int Gesamtgewicht;
	std::string Bezeichnung;

	LKW();

	LKW(int id, std::string marke, std::string modell,
		int gewicht, std::string bez);

	void load(int x);

	void unload(int x);

	void show_Gesamtgewicht(void);


	~LKW();
};

