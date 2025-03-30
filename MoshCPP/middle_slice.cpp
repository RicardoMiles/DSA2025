#include <iostream>
#include <string>

using namespace std;

string middleThree(string s){
    if(s.length()<3){
        return "";
    }else{
        int start = s.length()/2 - 1;
        int length = 3;
        return s.substr(start,length);
    }
}

int main(){
    cout << "Please iput a string to get middele 3 letters" << endl;
    string s = "";
    getline(cin, s);
    string middleString = middleThree(s);
    if(middleString != ""){
        cout << "Middle Three Letters are "  << middleString << endl;
    }else{
        cout << "User gave a string in less than 3 letters." << endl;
    }
    return 0;
}



