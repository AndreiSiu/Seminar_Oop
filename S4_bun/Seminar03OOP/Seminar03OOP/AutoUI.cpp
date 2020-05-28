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
	std::cout << "# 6. Sort                             \n";
	std::cout << "# 0. Exit                                 \n";
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

		AutoController::GetInstance()->save(a1);
		AutoController::GetInstance()->save(a2);
		AutoController::GetInstance()->save(a3);
		AutoController::GetInstance()->save(a4);
		AutoController::GetInstance()->save(a5);
		
		MenuText();
		std::cin >> key;
		if (key == 1)
		{
			AutoController::GetInstance()->add();
		}
		else if (key == 2)
		{
			AutoController::GetInstance()->del();
		}
		else if (key == 3)
		{
			AutoController::GetInstance()->update();
		}
		else if (key == 4)
		{
			AutoController::GetInstance()->findId();
			
		}
		else if (key == 5)
		{
			AutoController::GetInstance()->show();
		}
		else if (key == 6) {

			AutoController::GetInstance()->sortAutos();

		}
		else if (key == 0)
		{
			running = false;
		}
	}
}