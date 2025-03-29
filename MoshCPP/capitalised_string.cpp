#include <iostream>
#include <string>

using namespace std;

string capitalise(string raw){
    if (raw.empty()){
        return "Empty input string error!";
    }
    if(raw[0] >= 'a' && raw[0] <= 'z'){
        raw[0] += ('A' - 'a');
    }
    return raw;
}

int main(){
    // Ask for character from user
    cout << "Please input string: " << endl;
    string rawString = "";
    getline(cin, rawString);
    cout << endl;
    rawString = capitalise(rawString);
    cout << rawString << endl;
    return 0;
}