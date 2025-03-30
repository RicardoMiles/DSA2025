#include <iostream>
#include <string>

using namespace std;

const int MIN_NUM_CHAR = 48;
const int MAX_NUM_CHAR = 57;

int safecoversion(string s){
    bool valid = true;
    for(int i = 0 ;i < s.length(); i++){
        if(!(s[i]<= MAX_NUM_CHAR) && !(s[i] >= (MIN_NUM_CHAR))){
            valid = false;
        }
    }
    if(valid){
        return stoi(s);
    }
    return -1;
}

int main(){
    cout << "Please provide the string you'd like to converse: " << endl;
    string input = "";
    getline(cin, input);
    int result = safecoversion(input);
    if (result == -1){
        cout << "Invalid input! " << endl;
    }else{
        cout << result << endl;
    }
    return 0;
}