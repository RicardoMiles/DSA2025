#include <iostream>
#include <string>

using namespace std;

int main(){
    string line;
    
    cout << "Please input something" << endl;
    
    getline(cin,line);

    cout << endl;
    cout << "Processing……" << endl << "string line;" << endl << "getline(cin,line);" << endl << "cout << line << endl;" << endl << endl;
    
    cout << "You entered: " << line << endl;

    return 0;
}
