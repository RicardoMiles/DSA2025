/*
Exercise 3: Dynamic Memory Allocation
Write a program to:
1. Dynamically allocate memory for an array of 5 integers using new.
2. Initialize the array with values and print them.
3. Deallocate the memory using delete[].
*/

#include <iostream>

using namespace std;

int main(){
    int* dynamic_array = new int[5];
    for(int i = 0;i<5;i++){
        *(dynamic_array+i) = i+1;
    }
    cout << "The array with assignment looks like: \n";
    for(int i = 0;i<5;i++){
        cout << *(dynamic_array+i) << endl;
    }
    delete[] dynamic_array;
    dynamic_array = nullptr;
    return 0;
}