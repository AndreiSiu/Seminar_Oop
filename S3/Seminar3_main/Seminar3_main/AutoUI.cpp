#include "pch.h"
#include "AutoUI.h"

void AutoUI::MenuText()
{
	cout << "####################################\n";
	cout << "                 MENU                \n";
	cout << "1. Add Auto\n";
	cout << "2. Delete Auto\n";
	cout << "3. Update Auto\n";
	cout << "4. Search Auto\n";
	cout << "5. Show all\n";
	cout << "0. Exit\n";
	cout << "####################################\n";

}

void AutoUI::Menu()
{
	bool running = true;
	while (running) {
		this->MenuText();
		int key;
		cout << "Choose an option: ";
		cin >> key;
		if (key == 0) {
			running = false;
		}

		if (key == 1) {
			int id;
			string marke;
			string modell;
			cout << "ID: ";
			cin >> id;

			cout << "Marke: ";
			cin >> marke;

			cout << "Modell: ";
			cin >> modell;

			Auto a = Auto(id, marke, modell);

			if (this->controller.saveAuto(&a) != nullptr) {
				cout << "Car already exists\n";
			}
			else {

				cout << "The car was saved\n";
			}
		}

		if (key == 2) {
			int id;
			cout << "ID: ";
			cin >> id;
			if (this->controller.deleteAuto(id) != nullptr) {
				cout << "The car was deleted\n";
			}
			else {
				cout << "Could not find car\n";
			}
		}
		if (key == 3) {
			int id;
			string marke;
			string modell;
			cout << "ID: ";
			cin >> id;

			cout << "Marke: ";
			cin >> marke;

			cout << "Modell: ";
			cin >> modell;

			Auto a = Auto(id, marke, modell);

			if (this->controller.updateAuto(&a) == nullptr) {
				cout << "The car was succesfully updated\n";
			}
			else {
				cout << "Could not update car\n";
			}
		}
		if (key == 4) {
			int id;
			cout << "ID: ";
			cin >> id;
			if (this->controller.findAutoById(id) != nullptr) {
				cout << "The car exists\n";
			}
			else {
				cout << "Could not find car\n";
			}
		}
		if (key == 5) {
			vector<Auto*> autos_copy = this->controller.findAll();
			for (int i = 0; i < autos_copy.size(); i++) {
				cout << autos_copy[i]->GetId()<<"\n";
			}
			
		}
	}

}
