#include "pch.h"
#include <iostream>
#include "Rental.h"
#include "Auto.h"
#include "LKW.h"
#include "PKW.h"
#include "Kunde.h"

#include "AutoUI.h"


void Seminar3() {
	Rental rental = Rental();

	Kunde k1 = Kunde(1, "Bob");
	Kunde k2 = Kunde(2, "Andrei");
	Kunde k3 = Kunde(3, "Cioaba");

	//Test Rental add client
	rental.add_client(k1);
	rental.add_client(k2);
	rental.add_client(k3);
	//rental.add_client(k1);

	rental.show_clients();

	//Test Rental update
	//aici se cere un name, de tip string
	rental.update_client(k1);
	rental.show_clients();

	//Test Rental delete client
	rental.delete_client(k1);
	rental.show_clients();

	//Test Rental add auto
	Auto a1 = Auto(1, "Audi", "TT");
	Auto a2 = Auto(2, "Ford", "Focus");
	rental.add_auto(a1);
	rental.add_auto(a2);

	rental.show_autos();

	//Test Rental delete auto
	rental.delete_auto(a1);
	rental.show_autos();

	//Test PKW
	PKW p1 = PKW(3, "PKW1", "MOSDa", "AK47");
	rental.add_auto(p1);

	rental.show_autos();

	//TEST LKW, load, unload
	LKW l1 = LKW(4, "LKW1", "asd1", 0, "Viel");
	l1.load(100);
	l1.show_Gesamtgewicht();
	l1.unload(50);
	l1.show_Gesamtgewicht();
	l1.unload(51);


	rental.add_auto(l1);
	rental.show_autos();
}

void Seminar4() {
	AutoUI menu;
	menu.Menu();
}

int main()
{
	Seminar4();
	return 0;
}

