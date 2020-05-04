#pragma once
#include "Rental.h"
#include "Auto.h"
#include "Kunde.h"
#include "AutoInMemoryRepository.h"
#include <iostream>

class AutoController
{
	private:
		AutoInMemoryRepository repo;
		//the way to make this unique(singleton)
		static AutoController* instance;

	public:
		AutoController();

		static AutoController* GetInstance();

		Auto findOne(int id) { return repo.findOne(id); }

		std::vector<Auto> findAll() { return repo.findAll(); }

		Auto save(Auto entity) { return repo.save(entity); }

		Auto updateAuto(Auto entity) { return repo.update(entity); }

		Auto deleleteAuto(Auto entity) { return repo.del(entity); }

		void sortAutos() { repo.sort_autos(); }


		/// <summary>	For the Menu. </summary>
		void add();

		void del();

		void update();

		void findId();

		void show();

		void sort();
};

