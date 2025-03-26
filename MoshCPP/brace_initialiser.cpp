#include <iostream>
using namespace std;

int main(){
    int myArrays[5] = {[0] = 10, [4] = 50};
    
    cout << "`int myArray[5] = {[0]=10, [4]= 50}`" << endl;

    for(int i = 0;i < 5; i++){
        cout << "The #" << i << " element's value is " << myArrays[i] << endl;
    }
    return 0;
}
