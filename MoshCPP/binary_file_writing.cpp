#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int numbers [] = {1000000,2000000,3000000};
    ofstream file;
    // We can chose .bin or .dat as extension
    // bin -> short for binary
    // dat -> short for data
    // But always pass second parameter to inform open() method 
    // Store this file in what mode
    file.open("numbers.bin",ios::binary);
    // ios is in
    if(file.is_open()){
        // We do the cast bc &numbers is int pointer
        // write() method expect char*
        file.write(reinterpret_cast<char*>(&numbers),sizeof(numbers));
        file.close();
    }
    return 0;
}
