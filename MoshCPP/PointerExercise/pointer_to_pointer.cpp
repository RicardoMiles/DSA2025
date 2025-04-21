/*
Exercise 4: Pointer to Pointer
Implement a program to:
1. Declare a pointer-to-pointer (e.g., int** ptr).
2. Dynamically allocate memory for an integer and assign a value through the pointer-to-pointer.
3. Print the value and address.
*/

#include <iostream>

using namespace std;

int main(){
    int** ptrToPtr = new int*;
    *ptrToPtr = new int;
    *(*(ptrToPtr)) = 9527;
    cout << "The value should be 9527, and it is\n" << *(*(ptrToPtr)) <<
    "\nThe address of the dynamically allocated int is\n" << *(ptrToPtr) <<
    "\nIt is implementation of pointer to pointer by\n" << 
    "int** ptrToPtr = new int*;\n*ptrToPtr = new int;\n*(*(ptrToPtr)) = 9527;" << endl;
    delete *ptrToPtr;
    *ptrToPtr = nullptr;
    delete ptrToPtr;
    ptrToPtr = nullptr;
    return 0;
}