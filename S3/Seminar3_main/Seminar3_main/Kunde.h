#pragma once
#include <string>
class Kunde
{
	private:
		int id;
		std::string name;

	public:
		Kunde(int id, std::string name);

		int GetId(void);

		std::string GetName(void);

		void SetId(int x);

		void SetName(std::string x);

		~Kunde();
};

