#include <iostream>
using namespace std;

int main(){
    int array[5] = {};
    cout << "int array[5] = {};" <<endl;
    for (int i:array){
        cout << i << endl;
    }
    int arrayTwo[5];
    cout << "int arrayTwo[5];" << endl;
    for (int i:arrayTwo){
        cout << i << endl;
    }
    return 0;
}