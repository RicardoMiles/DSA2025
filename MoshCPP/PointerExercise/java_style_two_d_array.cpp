/*
Exercise 9: Implement a 2D Array Using Pointers
Write a program to:
1. Dynamically allocate memory for a 2D array using a pointer-to-pointer (int**).
2. Initialize the array with values.
3. Print the array values.
4. Deallocate the memory.
*/

#define rows 3
#define cols 3

int main(){
    // JAVA style array
    // array -> store pointers point to row
    // rows -> 1D array (pointer of the first element)
    
    // Initialise
    int** array = new int*[rows];
    for(int i = 0; i<rows; i++){
        array[rows] = new int[cols];
    }
    for(int i = 0; i< rows; i++){
        for(int j = 0; j<cols;j++){
            *(array[i][j]) = 0;
        }
    }
    for(int i = 0; i< rows; i++){
        delete[] array[rows];
        array[rows] = nullptr;
    }
    delete array;
    array = nullptr;
    
    return 0;
}