#include "pch.h"
#include "AutoInMemoryRepository.h"
/*
	3 variante pentru a implementa astea, care returneaza o entitate sau null
	-cu pointer, ca in exepmlul dat
	-exception
	-optional (ceva din std)

	mai se poate si cu bool, dar pff
*/
Auto* AutoInMemoryRepository::findOne(int id)
{
	for (int i = 0; i < autos.size(); i++) {
		if (autos[i]->GetId() == id) {
			return autos[i];
		}
	}
	return nullptr;
	/*try {
		
	}
	catch(exception f){
		throw f;
		return;
	}*/
}

vector<Auto*> AutoInMemoryRepository::findAll()
{
	vector<Auto*> autos_copy;
	for (int i = 0; i < autos.size(); i++) {
		autos_copy.push_back(autos[i]);
	}

	return autos_copy;
}

Auto* AutoInMemoryRepository::save(Auto* a)
{
	for (int i = 0; i < autos.size(); i++) {

		if (autos[i] == a) {
			printf("%d %d %d\n",autos.size(), autos[0]->GetId(), a->GetId());
			return autos[i];
		}
	}
	autos.push_back(a);
	return nullptr;
}

Auto* AutoInMemoryRepository::del(int id)
{
	for (int i = 0; i < autos.size(); i++) {
		if (autos[i]->GetId() == id) {
			Auto* aux = autos[i];
			autos.erase(autos.begin() + i);
			return aux;
		}
	}
	return nullptr;
}

Auto* AutoInMemoryRepository::update(Auto* a)
{
	for (int i = 0; i < autos.size(); i++) {
		if (autos[i]->GetId() == a->GetId()) {

			autos.erase(autos.begin() + i);

			autos.push_back(a);

			return nullptr;
		}
	}
	return a;
	
}
