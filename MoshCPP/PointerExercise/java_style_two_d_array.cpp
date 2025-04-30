/*
Exercise 9: Implement a 2D Array Using Pointers
Write a program to:
1. Dynamically allocate memory for a 2D array using a pointer-to-pointer (int**).
2. Initialize the array with values.
3. Print the array values.
4. Deallocate the memory.
*/
#include <iostream>

#define rows 3
#define cols 3
 
using namespace std;

int main(){
    // JAVA style array
    // array -> store pointers point to row
    // rows -> 1D array (pointer of the first element)
    
    // Initialise
   int** java_style_array = new int*[rows];
   for(int i = 0;i < rows;i++){
        java_style_array[i] = new int[cols];
        for(int j = 0;j< cols;j++){
            java_style_array[i][j] = 0;
        }
   }
   
   for(int i = 0;i<rows;i++){
        for(int j = 0; j< cols; j++){
            cout << java_style_array[i][j] << "\n";
        }
   }

   for(int i = 0;i<rows;i++){
       delete[] (java_style_array[i]);
       java_style_array[i] = nullptr;
   }
   delete[] java_style_array;
   java_style_array = nullptr;

   return 0;
}