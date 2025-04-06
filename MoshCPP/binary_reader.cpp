#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int numbers[3];
    ifstream file;
    file.open("numbers.bin",ios::binary);
    if(file.is_open()){
        int number;
        // We call the read() method with the same argument as write() method()
        // First argument is the memory place we need to load data to
        // Second argument is the size of data, determine how to extract date from file
        while(file.read(reinterpret_cast<char*>(&number),sizeof(number))){
            cout << number << endl;
        }
        file.close();
    }
    return 0;
}
