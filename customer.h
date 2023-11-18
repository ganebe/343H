#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include <string>
#include <vector>
#include<iostream>
#include"transaction.h"
using namespace std;

class Transaction; // Forward declaration
class DataLoader; // Forward declaration
class CommandHandler; // Forward declaration


class Customer {
public:
    Customer(int customerId, const string& lastName, const string& firstName);
    int getCustomerId() const;
    string getLastName() const;
    string getFirstName() const;
    void addTransaction(Transaction* transaction);
    const vector<Transaction*>& getTransactions() const;
    void displayHistory() const;

private:
    int customerId_;
    string lastName_;
    string firstName_;
    Hash<int, Customer*> customers_;
};
#endif
