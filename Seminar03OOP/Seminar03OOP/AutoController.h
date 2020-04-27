#pragma once
#include "Rental.h"
#include "Auto.h"
#include "Kunde.h"
#include "AutoInMemoryRepository.h"

class AutoController
{
	private:
		AutoInMemoryRepository repo;
	public:
		Auto findOne(int id) { return repo.findOne(id); }

		std::vector<Auto> findAll() { return repo.findAll(); }

		Auto save(Auto entity) { return repo.save(entity); }

		Auto update(Auto entity) { return repo.update(entity); }

		Auto del(Auto entity) { return repo.del(entity); }
};

