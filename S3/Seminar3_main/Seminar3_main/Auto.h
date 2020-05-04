#pragma once
#include <string>
class Auto
{
	protected:
		int id;
		std::string marke;
		std::string modell;


	public:
		Auto();

		Auto(int id, std::string marke, std::string modell);

		int GetId(void);

		std::string GetMarke(void);

		std::string GetModell(void);

		void SetId(int x);

		void SetMarke(std::string x);

		void SetModell(std::string x);

		~Auto();
};

