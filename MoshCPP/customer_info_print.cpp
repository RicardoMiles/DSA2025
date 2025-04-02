#include <iostream>
#include <string>
using namespace std;

struct Customer{
    int ID;
    string name;
    string email;
};

int main(){
    Customer customer;
    cout << "Please give me information of customer "<< endl
    << "1. Customer ID:" << endl;
    cin >> customer.ID;
    cout << endl;
    cout << "2. Customer Name: " << endl;
    cin >> customer.name;
    cout << endl;
    cout << "3. Customer's mailbox address" << endl;
    cin >> customer.email;
    cout << endl;

    cout << customer.name << " with ID: " << customer.ID << ", his mailbox address is " << customer.email << endl;
    return 0;
}