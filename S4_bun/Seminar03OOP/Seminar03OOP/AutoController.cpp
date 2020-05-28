#include "AutoController.h"

AutoController::AutoController()
{
	//instance = 0;
}

AutoController *AutoController::instance = 0;

AutoController* AutoController::GetInstance()
{
	if (!	instance) {
		instance = new AutoController();
	}
	return instance;
}


void AutoController::add() {
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
	this->save(a);
	std::cout << "Succesfully saved!\n";
}

void AutoController::del() {
	int ID;
	std::string marke = "";
	std::string modell = "";
	std::cout << "ID to be deleted\n";
	std::cin >> ID;
	Auto a = Auto(ID, marke, modell);
	this->deleleteAuto(a);
}

void AutoController::update() {
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
	this->updateAuto(a);
	std::cout << "Succesfully updated!\n";
}

void AutoController::findId() {
	int ID;
	std::string marke;
	std::string modell;
	std::cout << "ID: \n";
	std::cin >> ID;
	Auto a =this->findOne(ID);
	std::cout << a.GetId() + " " + a.GetMarke() + " " + a.GetModell() + "\n";
}

void AutoController::show() {
	std::vector<Auto> vec = this->findAll();
	std::vector<Auto>::iterator ptr;
	for (ptr = vec.begin(); ptr < vec.end(); ptr++)
	{
		std::cout << std::to_string(ptr->GetId()) + ": " + ptr->GetMarke() + " " + ptr->GetModell() + "\n";
	}
}

/*void AutoController::sortAutos() {
	this->repo.sort_autos();
}*/

void AutoController::sort_autos() {
	std::vector<Auto> vec = this->findAll();
	sort(vec.begin(), vec.end(),sort_by_marke());
	//sorter->sort(findAll());
}

void AutoController::set_sorter(Sorter* srt)
{
	sorter = srt;
}
