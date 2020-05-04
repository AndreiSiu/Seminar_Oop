#include "Reserve.h"

Reserve::Reserve(Kunde person, Auto car, int days) {
	this->person = person;
	this->car = car;
	this->days = days;
}

void Reserve::setPerson(Kunde pers) {
	this->person = pers;
}

Kunde Reserve::getPerson() {
	return  this->person;
}

void Reserve::setCar(Auto car) {
	this->car = car;
}

Auto Reserve::getAuto() {
	return this->car;
}