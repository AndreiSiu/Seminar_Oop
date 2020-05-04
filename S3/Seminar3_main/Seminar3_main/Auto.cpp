#include "pch.h"
#include "Auto.h"

Auto::Auto() {

}

Auto::Auto(int x, std::string y, std::string z) {
	this->id = x;
	this->marke = y;
	this->modell = z;
}

int Auto::GetId() {
	return this->id;
}

std::string Auto::GetMarke() {
	return this->marke;
}

std::string Auto::GetModell() {
	return this->modell;
}

void Auto::SetId(int x) {
	this->id = x;
}

void Auto::SetMarke(std::string x) {
	marke = x;
}

void Auto::SetModell(std::string x) {
	modell = x;
}

Auto::~Auto()
{
}
