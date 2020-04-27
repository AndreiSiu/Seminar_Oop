#include "Rental.h"
#include <vector>
#include <algorithm>
#include <iostream>
#include "PKW.h"
#include "LKW.h"
Rental::Rental()
{

}

void Rental::add_client(Kunde client)
{
	std::vector<Kunde>::iterator ptr;
	for (ptr = clients.begin(); ptr < clients.end(); ptr++)
	{
		if (client.GetId() == ptr->GetId())
		{
			std::cout << "User already exists.\n";
			return;
		}
	}
	clients.push_back(client);
}

void Rental::show_autos()
{
	std::vector<Auto>::iterator ptr;
	std::cout << "Auto list: \n";
	for (ptr = autos.begin(); ptr < autos.end(); ptr++)
	{
		std::cout << ptr->GetMarke() << "\n";
	}
}

void Rental::delete_client(Kunde client)
{
	std::vector<Kunde>::iterator ptr;
	for (ptr = clients.begin(); ptr < clients.end(); ptr++)
	{
		if (client.GetId() == ptr->GetId())
		{
			clients.erase(ptr, ptr);
		}
	}
}

void Rental::show_clients()
{
	std::vector<Kunde>::iterator ptr;
	std::cout << "Client list: \n";
	for (ptr = clients.begin(); ptr < clients.end(); ptr++)
	{
		std::cout << ptr->GetName() << "\n";
	}
}

void Rental::update_client(Kunde client)
{
	bool ok = false;
	std::vector<Kunde>::iterator ptr;
	for (ptr = clients.begin(); ptr < clients.end(); ptr++)
	{
		if (client.GetId() == ptr->GetId())
		{
			std::cout << "Change your name\n";
			std::string name;
			std::cin >> name;
			ptr->SetName(name);
			ok = true;
			return;
		}
	}
	if (ok == false)
	{
		std::cout << "Client not found.\n";
	}
}

void Rental::add_auto(Auto aut)
{
	std::vector<Auto>::iterator ptr;
	for (ptr = autos.begin(); ptr < autos.end(); ptr++)
	{
		if (aut.GetId() == ptr->GetId())
		{
			std::cout << "User already exists.\n";
			return;
		}
	}
	autos.push_back(aut);
}

void Rental::delete_auto(Auto aut)
{
	std::vector<Auto>::iterator ptr;
	for (ptr = autos.begin(); ptr < autos.end(); ptr++)
	{
		if (aut.GetId() == ptr->GetId())
		{
			autos.erase(ptr, ptr);
		}
	}
}