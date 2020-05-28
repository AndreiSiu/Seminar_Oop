#pragma once
#include "Rental.h"
#include "Auto.h"
#include "Kunde.h"
#include "AutoInMemoryRepository.h"
#include <iostream>
#include <algorithm>
#include "Utils.h"
#include "Sorter.h"

class AutoController
{
	private:
		AutoInMemoryRepository repo;
		//the way to make this unique(singleton)
		static AutoController* instance;

		Sorter* sorter;

		//Seminar6 
		/*	
			infoAuto:
			0-new
			1-extended
			2-deleted
		*/
		int infoAuto;

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

		//fur seminar 6
		void sort_autos();

		void set_sorter(Sorter* srt);

		int GetInfo() { return this->infoAuto; }

		void SetInfo(int value) { this->infoAuto = value; }
};

