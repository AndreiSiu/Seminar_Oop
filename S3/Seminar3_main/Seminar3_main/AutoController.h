#pragma once
#include "AutoInMemoryRepository.h"
class AutoController
{
private:
	AutoInMemoryRepository repo;

public:
	AutoController()
	{

	}

	Auto* findAutoById(int id);

	vector<Auto*>findAll();

	Auto* saveAuto(Auto* a);

	Auto* deleteAuto(int id);

	Auto* updateAuto(Auto* a);

};

