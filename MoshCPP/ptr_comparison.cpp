#include <iostream>
using namespace std;

int main(){
    int numbers[] = { 10,20,30 };
    int* ptrLast = numbers + 2;
    // Better solution
    // int* ptrLast = &numbers[size(numbers)-1];
    for(int* i = ptrLast;i >= numbers;i--){
        cout << *i << endl ;
    }

    // while (ptrLast >= numbers){
    //     cout << *ptr << endl;
    //     ptrLast--;
    // }
    // No need to dereferencing cuz we compare two pointers

    return 0;
}