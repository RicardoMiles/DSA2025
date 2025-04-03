#include <iostream>
#include <string>
/*
Create a structure for representing an address.
- Street
- City
- ZipCode
Nest the Address structure within Customer.
Create and initialize a Customer object.
*/

using namespace std;


struct Address{
    string street;
    string city;
    short zipCode;
};

struct Customer{
    int ID;
    string name;
    string email;
    Address address;
};

int main(){
    Customer customer = {9527,
        "StarChow",
        "SamCiChow@gmail.com",
        {"BomLamGai","Hongkong",12138}
    };

    cout << "Customer ID: " << customer.ID << endl;
    cout << "Customer Name: " << customer.name << endl;
    cout << "Customer Email: " << customer.email << endl;
    cout << "Customer Address: " << customer.address.street << ", " 
         << customer.address.city << ", " << customer.address.zipCode << endl;
    return 0;
}


