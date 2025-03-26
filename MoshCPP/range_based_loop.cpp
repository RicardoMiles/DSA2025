#include <iostream>
using namespace std;

int main(){
        int myArray[] = {10,40};
	for(int num : myArray){
		cout << "range-based loop: " << num << endl;
	}
	for(auto num: myArray){
		cout << "range-based loop but auto keyword" << num << endl;
	}
	return 0;
}
