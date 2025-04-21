/*
Exercise 5: Pointer with Functions
1. Write a function that takes a pointer to an integer as an argument.
2. Inside the function, modify the value of the integer.
3. Call the function from main() and observe the changes in the original variable.
*/

#include <iostream>

using namespace std;

void modifyValue(int* num_ptr){
    *num_ptr = 8888;
    cout << "Function modifyValue() has been executed.\n";
}

int main(){
    int num = 9527;
    int* num_ptr = &num;
    modifyValue(num_ptr);
    cout << "Right now the 9527 has been modified to " << num << ".\n";
    return 0;
}
