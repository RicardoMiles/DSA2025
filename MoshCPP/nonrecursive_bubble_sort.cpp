#include <iostream>
using namespace std;

void swap(int numbers[],int a, int b){
    int temp = numbers[a];
    numbers[a] = numbers[b];
    numbers[b] = temp;
}

void bubbleSort(int numbers[], int size){
    bool swapped;
    for(int sizei = size; sizei>1 ; sizei = sizei-1){
        for(int i = 0; i < sizei-1; i++){
            swapped = false;
            if(numbers[i] > numbers[i+1]){
                swap(numbers,i,i+1);
                swapped = true;
            }
            if(!swapped){
                break;
            }
        }
    }
}


int main(){
    int numbers[] = {3,4,6,2,7,1,8,2,3};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    bubbleSort(numbers,size);
    for(int i = 0; i < size; i++){
        if(i != size -1){
            cout << numbers[i]<< " , ";
        }else{
            cout << numbers[i];
        }
        
    }
    cout << endl;
    return 0;
}