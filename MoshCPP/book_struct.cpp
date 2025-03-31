#include <iostream>
#include <string>

using namespace std;

struct Book{
    string title;
    string author;
    float price;

    void printInfo(){
        cout << "The book you are reading is " << title << " written by " << author << ". Its price is " << price << "GBP." << endl;
    }
};

int main(){
    Book currentBook;
    currentBook.title = "One Hundred Years of Solitude";
    currentBook.author = "Gabriel Garcia Marquez";
    currentBook.price = 14;
    currentBook.printInfo();
    return 0;
}
