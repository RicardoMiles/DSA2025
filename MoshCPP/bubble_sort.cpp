#include<iostream>
using namespace std;

void swap(int numbers[],int a, int b){
    int temp = numbers[a];
    numbers[a] = numbers[b];
    numbers[b] = temp;
}

void bubbleSort(int numbers[], int size){
    int unbalanced = 0;
    for(int i = 0; i< size-1 ;i++){
        if(numbers[i] > numbers[i+1]){
            swap(numbers,i,i+1);
            cout << "swap fine"<<endl;
            unbalanced = unbalanced + 1;
        }
    }
    if(unbalanced != 0){
        cout << "current unbalanced value is " << unbalanced << ". Initialised to be 0 then again"<<endl;
        unbalanced = 0;
        bubbleSort(numbers, size);
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