#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
    ofstream file;
    file.open("Game2025.csv");
    if(file.is_open()){
        file << "Game,Publisher,Year" << endl;
        file << "Elden Ring,FromSoftware,2024" << endl;
        file << "Persona 5 Royal,Sega,2024" << endl;
        file.close();
    }
    file.open("Test.txt");
    if(file.is_open()){
        file << setw(20) << "Hello" << setw(20) << "World" << endl;
        file.close();
    }
    return 0;
}