#pragma once
#pragma once
#include "Auto.h"
#include <string>
#include <vector>

template <class E>
class CrudRepository
{
public:

	virtual E findOne(int id) = 0;

	virtual std::vector<E> findAll() = 0;

	virtual E save(E entity) = 0;

	virtual E update(E entity) = 0;

	virtual E del(E entity) = 0;

	virtual ~CrudRepository() {};
};

class AutoInMemoryRepository : public CrudRepository<Auto>
{
private:
	std::vector<Auto> repo;
public:

	Auto findOne(int id);

	std::vector<Auto> findAll();

	Auto save(Auto entity);

	Auto update(Auto entity);

	Auto del(Auto entity);
};


