#include <iostream>
#include <string>

using namespace std;

bool isValid(string customerNumber){
    bool validationResult = false;
    if(customerNumber.length()!=6){
        return validationResult;
    }
    int digitCount = 0;
    int alphaCount = 0;
    for(int i = 0; i < customerNumber.length();i++){
        if(isdigit(customerNumber[i])){
            digitCount += 1;
        }
        if(isalpha(customerNumber[i])){
            alphaCount += 1;
        }
    }
    if ((alphaCount == 2) && (digitCount == 4)){
        validationResult = true;
    } 
    return validationResult;
}

int main(){
    string input = "";
    cout << "Please create a customer number, given the following format: " << endl << "2 alphabet characters & 4 digits " << endl << endl;
    getline(cin,input);
    // put boolalpha ahead of boolean output then we can get true or false
    cout << boolalpha << isValid(input) << endl<< endl;
    return 0;
}
