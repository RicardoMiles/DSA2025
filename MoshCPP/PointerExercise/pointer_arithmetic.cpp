/*
Exercise 2: Pointer Arithmetic
Create an array of 5 integers. Use a pointer to:
Access and print each element of the array using pointer arithmetic.
Modify the values in the array using the pointer.
*/

#include <iostream>

using namespace std;

int main(){
    int numArray[5] = {1,2,3,4,5};
    int* array_ptr = numArray;

    for(int i = 0;i<5;i++){
        cout << *(array_ptr + i) << endl;
    }

    for(int i = 0;i<5;i++){
        *(array_ptr + i) += 10;
    }

    cout << "Add 10 to each element by\nfor(int i = 0;i<5;i++){\n    *(array_ptr + i) += 10;\n}" << endl;

    for(int i = 0;i<5;i++){
        cout << *(array_ptr + i) << endl;
    }
    return 0;
}