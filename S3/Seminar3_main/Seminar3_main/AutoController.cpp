#include "pch.h"
#include "AutoController.h"

Auto* AutoController::findAutoById(int id)
{
	return this->repo.findOne(id);
}

vector<Auto*> AutoController::findAll()
{

	return this->repo.findAll();
}

Auto* AutoController::saveAuto(Auto* a)
{
	return this->repo.save(a);
}

Auto* AutoController::deleteAuto(int id)
{
	return this->repo.del(id);
}

Auto* AutoController::updateAuto(Auto* a)
{
	return this->repo.update(a);
}
