#include "AutoUI.h"
#include <iostream>

void AutoUI::MenuText()
{
	std::cout << "--------------\n";
	std::cout << "# 1. Save                                 \n";
	std::cout << "# 2. Delete                                \n";
	std::cout << "# 3. Update                                \n";
	std::cout << "# 4. Find by Id                            \n";
	std::cout << "# 5. Show all                             \n";
	std::cout << "# 6. Exit                                 \n";
	std::cout << "--------------\n";
}

void AutoUI::AutoMenu()
{
	int key = 1;
	bool running = true;
	while (running)
	{
		Auto a1 = Auto(1, "Ford", "Fiesta");
		Auto a2 = Auto(2, "Audi", "TT");
		Auto a3 = Auto(3, "Volkswagen", "T-Roc");
		Auto a4 = Auto(4, "Maserati", "A3");
		Auto a5 = Auto(5, "Ford", "Focus");
		controller.save(a1);
		controller.save(a2);
		controller.save(a3);
		controller.save(a4);
		controller.save(a5);
		MenuText();
		std::cin >> key;
		if (key == 1)
		{
			int ID;
			std::string marke;
			std::string modell;
			std::cout << "New ID\n";
			std::cin >> ID;
			std::cout << "New marke\n";
			std::cin >> marke;
			std::cout << "New modell\n";
			std::cin >> modell;
			Auto a = Auto(ID, marke, modell);
			controller.save(a);
			std::cout << "Succesfully saved!\n";
		}
		else if (key == 2)
		{
			int ID;
			std::string marke = "";
			std::string modell = "";
			std::cout << "ID to be deleted\n";
			std::cin >> ID;
			Auto a = Auto(ID, marke, modell);
			controller.del(a);
		}
		else if (key == 3)
		{
			int ID;
			std::string marke;
			std::string modell;
			std::cout << "The ID to be updated.\n";
			std::cin >> ID;
			std::cout << "New marke\n";
			std::cin >> marke;
			std::cout << "New modell\n";
			std::cin >> modell;
			Auto a = Auto(ID, marke, modell);
			controller.update(a);
			std::cout << "Succesfully updated!\n";
		}
		else if (key == 4)
		{
			int ID;
			std::string marke;
			std::string modell;
			std::cout << "ID: \n";
			std::cin >> ID;
			Auto a = controller.findOne(ID);
			std::cout << a.GetId() + " " + a.GetMarke() + " " + a.GetModell() + "\n";
			
		}
		else if (key == 5)
		{
			std::vector<Auto> vec = controller.findAll();
			std::vector<Auto>::iterator ptr;
			for (ptr = vec.begin(); ptr < vec.end(); ptr++)
			{
				std::cout << std::to_string(ptr->GetId()) + ": " + ptr->GetMarke() + " " + ptr->GetModell() + "\n";
			}
		}
		else if (key == 6)
		{
			running = false;
		}
	}
}