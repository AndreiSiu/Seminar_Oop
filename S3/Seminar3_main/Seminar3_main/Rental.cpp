#include "pch.h"
#include "Rental.h"
#include <algorithm>
#include <iostream>


Rental::Rental()
{
}

void Rental::add_client(Kunde client) {
	/*
		se cauta prin vectorul clients
		daca ID nu e unic, nu se adauga
		altfel se adauga la sfarsit
	*/
	for (std::vector<Kunde>::iterator ptr = clients.begin();
		ptr < clients.end(); ptr++) {

		if (client.GetId() == ptr->GetId()) {
			std::cout << "Client exists!\n";
			return;
		}

	}
	//Wenn Client nicht existiert, dann wird dieser gefugt
	this->clients.push_back(client);
}

void Rental::delete_client(Kunde client) {
	/*
		se cauta Client dupa ID
		daca ID nu exista, nu se schimba nimic
	*/
	for (std::vector<Kunde>::iterator ptr = clients.begin();
		ptr < clients.end(); ptr++) {

		if (client.GetId() == ptr->GetId()) {
			clients.erase(ptr);
			std::cout << "Client "<<client.GetName() <<" deleted!\n";
			return;
		}

	}
	std::cout << "Clientul nu exista!\n";
}

void Rental::update_client(Kunde client) {

	bool ok = false; //daca ID-ul nu exista intra intr-o conditie noua

	//se cere un nume, care il va inlocui pe cel vechi
	for (std::vector<Kunde>::iterator ptr = clients.begin();
		ptr < clients.end(); ptr++) {

		if (client.GetId() == ptr->GetId()) {
			std::cout << "New Name: ";
			std::string name;
			std::cin >> name;
			ptr->SetName(name);
			ok = true;
		}

	}
	if (ok == false) {
		std::cout << "Client not found\n";
	}
}

void Rental::show_clients() {
	for (std::vector<Kunde>::iterator ptr = clients.begin();
		ptr < clients.end(); ptr++) {

		std::cout << ptr->GetName() << ' ';
	}
	std::cout << '\n';
}

void Rental::add_auto(Auto a) {
	/*
		se cauta prin vectorul autos
		daca ID nu e unic, nu se adauga
		altfel se adauga la sfarsit
	*/
	for (std::vector<Auto>::iterator ptr = autos.begin();
		ptr < autos.end(); ptr++) {

		if (a.GetId() == ptr->GetId()) {
			std::cout << "Auto exists!\n";
			return;
		}

	}
	autos.push_back(a);
}

void Rental::delete_auto(Auto a) {
	/*
		se cauta Auto dupa ID
		daca ID nu exista, nu se schimba nimic
	*/
	for (std::vector<Auto>::iterator ptr = autos.begin();
		ptr < autos.end(); ptr++) {

		if (a.GetId() == ptr->GetId()) {
			autos.erase(ptr);
			std::cout << "Client " << a.GetMarke() << " deleted!\n";
			return;
		}

	}
	std::cout << "Auto does not exist!\n";
}

void Rental::show_autos() {
	for (std::vector<Auto>::iterator ptr = autos.begin();
		ptr < autos.end(); ptr++) {

		std::cout << ptr->GetMarke() << ' ';
	}
	std::cout << '\n';
}

Rental::~Rental()
{
	this->autos.clear();
	this->clients.clear();
}
