#ifndef Verify_H
#define Verify_H
#include <string>
#include <set>
#include "store.h"

class Customer;

class Verify
{
public:
	friend class Store;

	Verify(){};			 // Default Constructor
	virtual ~Verify(){}; // Destructor

	//------------------------- check ---------------------------------
	// Checks if the request is valid according to expected symbols
	//-------------------------------------------------------------------------
	static Verify *check(std::string identifier);

private:
	//------------------------- create ---------------------------------
	// factory method creating instances of command subclasses
	// (Borrow, Return, Inventory, History) based on the actionType,
	// and it executes the command immediately after creation.
	//-------------------------------------------------------------------------
	static Verify *create(char actionType, Customer *cus, Movie *mov);
};

#endif
