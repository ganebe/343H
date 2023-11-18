#ifndef STORE_H
#define STORE_H

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "HashTable.h"
#include "Inventory.h"
#include "Customer.h"
#include "Action.h"
using namespace std;

class Store
{
public:
    Store(); // constructor

    //------------------------- loadMovies ---------------------------------
    // Reads DVD movie information from the specified file.
    //-------------------------------------------------------------------------
    void loadMovies(string);

    //------------------------- loadCustomers ---------------------------------
    // Reads customer information from the specified file.
    //-------------------------------------------------------------------------
    void loadCustomers(string);

    //------------------------- runCommands ---------------------------------
    // Reads and runs command information from the specified file.
    //-------------------------------------------------------------------------
    void runCommands(string); // reads and runs commands file

private:
    Customer customers;  // instance variable for Customer class
    Inventory inventory; // instance variable for Inventory class
    Action action;       // instance variable for Action class
};
#endif
