#include <iostream>
using namespace std;

void swap(int* first, int* second){
    int temp = *first;
    *first = *second;
    *second = temp;
}

int main(){
    int first = 10;
    int second = 20;
    cout << "The first is " << first << ", then the second is " << second << ". Before swapping"<< endl;
    int* firstptr = &first;
    int* secondptr = &second;
    swap(firstptr,secondptr);
    cout << "The first is " << first << ", then the second is " << second << ". After swapping"<< endl;
    return 0;
}