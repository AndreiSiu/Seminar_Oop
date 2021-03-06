
#include "Auto.h"
#include "Kunde.h"
#include "Reserve.h"
#include <vector>
class Rental
{
private:
	std::vector<Auto> autos;
	std::vector<Kunde> clients;
	std::vector<Reserve> reserve;
public:

	Rental();

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Adds a person tip Kunde to the clients vector. </summary>
	/// 
	/// <param name="client">	The client. </param>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	void add_client(Kunde client);

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Adds a car tip Auto to the autos vector. </summary>
	/// 
	/// <param name="aut">	The aut. </param>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	void add_auto(Auto aut);

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Deletes a car from autos </summary>
	/// 
	/// <param name="aut">	The aut. </param>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	void delete_auto(Auto aut);

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Deletes a client from clients </summary>
	/// 
	/// <param name="client">	The client. </param>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	void delete_client(Kunde client);

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Updates a person with the param </summary>
	/// 
	/// <param name="client">	The client. </param>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	void update_client(Kunde client);

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Shows the clients. </summary>
	///
	/// <remarks>	PC, 5/4/2020. </remarks>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	void show_clients();

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Shows the autos. </summary>
	///
	/// <remarks>	PC, 5/4/2020. </remarks>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	void show_autos();

	bool reserve_auto(Kunde person, Auto car, int days);

	///Seminar 6
	//bearbeitet infoAuto, macht est zum 2
	void return_auto(Auto a, Kunde p);

	//bearbeitet infoAuto, macht est zum 1
	void extend_reservation(Auto a, Kunde p);

};