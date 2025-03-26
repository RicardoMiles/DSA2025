#include<iostream>
using namespace std;

int linearSearch(int array[],int targetValue,int size){
    for(int i = 0; i < size; i++){
        if(array[i] == targetValue){
            return i;
        }
    }
    return -1;
}

int main(){
    int numbers[] = {20,30,40};
    int targetValue = 30;
    // int result = linearSearch(numbers, targetValue, size(numbers));
    // Reason why I comment is due to default compiler setting by commandline g++ *.cpp -o *
    // As shown below, an OG way
    int result = linearSearch(numbers, targetValue, sizeof(numbers)/sizeof(numbers[0]));
    cout << "Target number located at #" << result << endl;
    return 0;
}



