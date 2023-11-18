#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include <string>
#include <vector>
#include<iostream>
using namespace std;

class Customer {
public:
    Customer(int customerId, const string& lastName, const string& firstName);
    int getCustomerId() const;
    string getLastName() const;
    string getFirstName() const;
    void addHistory(string data);
    void displayHistory() const;

private:
    int customerId_;
    string lastName_;
    string firstName_;
    vector<string> history();
};
#endif
