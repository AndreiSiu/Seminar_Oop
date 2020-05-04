#pragma once
#include <vector>
/*
	CRUD Repository
*/
template <class E>
class CrudRepo
{
public:
	/*
		@param: id -the id of the entity to be returned not be null
		@return the entity with the specific id or nll
	*/
	virtual E findOne(int id) = 0;


	/*
		@return all entities
	*/
	virtual std::vector<E> findAll() = 0;

	///-------------------------------------------------------------------------------------------------
	/// <summary>	Saves the given entity. </summary>
	///
	/// <remarks>	PC, 4/13/2020. </remarks>
	///
	/// <param name="entity">	The entity to save. </param>
	///
	/// <returns>	nullptr if entity is added, else return entity. </returns>

	virtual E save(E entity) = 0;

	virtual E del(int id) = 0;

	virtual E update(E entity) = 0;

	virtual ~CrudRepo() {};
};

