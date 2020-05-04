#pragma once
#include "CrudRepo.h"
#include <vector>
#include "Auto.h"
#include <exception>
using namespace std;
class AutoInMemoryRepository :
	public CrudRepo<Auto*>
{
	vector<Auto*> autos;

public:
	AutoInMemoryRepository() {}

	Auto* findOne(int id);

	vector<Auto*>findAll();

	Auto* save(Auto* a);

	Auto* del(int id);

	Auto* update(Auto* a);
	
};

