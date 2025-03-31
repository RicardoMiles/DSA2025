#include <iostream>
#include <string>

using namespace std;

// Semicolon should be included right after the declarationo of struct
struct Past{
    string name;
    int age;

    void greet(){
        cout << "Thank you for your waste of time, " << name << "." << endl << endl;
    }
};

int main(){
    Past j;
    cout << "Please enter the past: "<< endl << endl;
    string name = "";
    getline(cin,name);
    cout << endl;
    j.name = name;
    j.greet();
    return 0; 
}
