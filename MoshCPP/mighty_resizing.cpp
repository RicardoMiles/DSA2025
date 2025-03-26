#include <iostream>
using namespace std;

int main(){
    // Creating integer array 
    int* numbers = new int[5];
    // Use a variable to track the entry point
    // Initialising it to zero
    int entries = 0;
    int capacity = 5;
    
    // Constantly ask users to enter a number
    // Store it to our array
    while(true){
        cout << "Number: ";
        cin >> numbers[entries];
        // check whether it is a valid number or not
        // if cin.fail() returns True means
        // users enter something can't be converted to a number
        // we're gonna break out of this loop
        if(cin.fail()){
            break;
        }
        // otherwise we're going to increase entries by 1
        entries++;
        // Resize the array when it is full
        if(entries == capacity){
            // Create a temp array (twice the size)
            // Copy all the elements
            // Have "numbers" pointer point to the new array
            cout << "The arraySize = " << entries << "We are gonna resize it."<< endl;
            capacity *= 2;
            int* temp = new int[capacity];
            for(int i = 0; i < entries; i++){
                temp[i] = numbers[i];
            }
            delete[] numbers;
            // int* numbers = &(temp[0]);
            // Wrong code is above
            numbers = temp;
        }
    }

    // loop to print user-entered numbers so far
    for (int i = 0; i < entries; i++){
        cout << numbers[i] << endl;
    }
    
    
    delete[] numbers;
    

    return 0; 
}