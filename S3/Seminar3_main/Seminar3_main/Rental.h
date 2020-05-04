#pragma once
#include "Auto.h"
#include "Kunde.h"
#include <vector>
class Rental
{
	private:
		std::vector<Auto> autos;

		std::vector<Kunde> clients;

	public:

	Rental();

	void add_client(Kunde client);

	void delete_client(Kunde client);

	void update_client(Kunde client);

	void show_clients(void);

	void add_auto(Auto masina);

	void delete_auto(Auto masina);

	void show_autos(void);

	~Rental();
};

