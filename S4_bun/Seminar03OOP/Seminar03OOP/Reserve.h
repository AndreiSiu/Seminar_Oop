#pragma once
#include <string>
#include "Auto.h"
#include "Kunde.h"
class Reserve
{
	private:
		int days;
		Kunde person;
		Auto car;
	public:
		Reserve(Kunde person, Auto car, int days);

		void setPerson(Kunde pers);

		Kunde getPerson();

		void setCar(Auto car);

		Auto getAuto();
};

