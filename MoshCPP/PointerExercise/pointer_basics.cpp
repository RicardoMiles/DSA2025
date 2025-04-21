#include <iostream>

/*
Exercise 1: Pointer Basics
Write a program to:
Declare an integer variable and initialize it.
Declare a pointer to the integer.
Print the variable's value, its address, and the value through the pointer.
*/

using namespace std;

int main(){
    int var = 10;
    int* var_ptr = &var;

    cout<< "Value of var: " << var << endl << 
    "Address of var: " << var_ptr << endl <<
    "Value through pointer: " << *var_ptr << endl;

    return 0;
}