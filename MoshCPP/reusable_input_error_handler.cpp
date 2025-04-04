#include <iostream>

using namespace std;


/*
    Mosh's hints
    Pass string type to our exception handler function
    In order to print different user messages
*/

int errorHandler(string givenTrial,int min,int max){
    int currentValue;
    while(true){
        cout << givenTrial;
        cin >> currentValue;
        if(cin.fail()){
            cout << "Invalid Value!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
        }else if(currentValue > max || currentValue < min){
            cout << "Number too small or large!" << endl;
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
        }else{
            break;
        }
    }
    return currentValue;
}

int main(){
    int first = errorHandler("First(negative): ", numeric_limits<int>::min(),-1);
    int second = errorHandler("Second(positive): ",1,numeric_limits<int>::max());
    cout << "You entered " << first<< " and " << second;
    return 0;
}
