#include <iostream>
#include <string>

using namespace std;

struct Book{
    string title;
    string author;
    float price;

    void printInfo(){
        cout << title << " written by " << author << ". Its price is " << price << "GBP." << endl << endl;
    }
};

int main(){
    Book bookfair[3] = {};
    cout << "Please enter three your favorite books! " << endl;

    /*
        Use for loop to optimise
        string rawprice = "";
        for(int i = 0; i < 3; i++){
           cout << "The #" << (i+1) << " book's title: ";
            getline(cin,bookfair[i].title);
            cout << endl << "The #" << (i+1) << " book's author: ";
            getline(cin,bookfair[i].author);
            cout << endl << "Its price: ";
            rawprice = "";
            getline(cin,rawprice);
            bookfair[i].price = stof(rawprice);
        }
    */
    cout << "The first book's title: ";
    getline(cin,bookfair[0].title);
    cout << endl << "The first book's author: ";
    getline(cin,bookfair[0].author);
    cout << endl << "Its price: ";
    string rawprice = "";
    getline(cin,rawprice);
    cout << endl;
    // bookfair[0].price = stoi(rawprice);
    bookfair[0].price = stof(rawprice);
    cout << "The second book's title: ";
    getline(cin,bookfair[1].title);
    cout << endl << "The second book's author: ";
    getline(cin,bookfair[1].author);
    cout << endl << "Its price: ";
    rawprice = "";
    getline(cin,rawprice);
    cout << endl;
    // bookfair[1].price = stoi(rawprice);
    bookfair[1].price = stof(rawprice);
    cout << "The third book's title: ";
    getline(cin,bookfair[2].title);
    cout << endl << "The third book's author: ";
    getline(cin,bookfair[2].author);
    cout << endl << "Its price: ";
    rawprice = "";
    getline(cin,rawprice);
    cout << endl;
    // bookfair[2].price = stoi(rawprice);
    bookfair[2].price = stof(rawprice);

    for(int i = 0; i<3; i++){
        bookfair[i].printInfo();
    }
    
    return 0;
}
