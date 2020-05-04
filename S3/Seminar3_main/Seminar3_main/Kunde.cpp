#include "pch.h"
#include "Kunde.h"


Kunde::Kunde(int x, std::string y)
{
	this->id = x;
	this->name = y;
}

int Kunde::GetId(void) {
	return this->id;
}

std::string Kunde::GetName(void) {
	return this->name;
}

void Kunde::SetId(int x) {
	this->id = x;
}

void Kunde::SetName(std::string x) {
	this->name = x;
}

Kunde::~Kunde()
{
}
