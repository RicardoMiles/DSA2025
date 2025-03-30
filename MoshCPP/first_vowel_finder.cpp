#include <iostream>
#include <string>

using namespace std;

const int MIN_ALPHABET_UPPER = 65;
const int MAX_ALPHABET_UPPER = 90;

// avoid using cctype.h cuz exercise limitation
char toLowerChar(char letter){
    if(letter <= MAX_ALPHABET_UPPER && letter >= MIN_ALPHABET_UPPER){
        letter = letter + 32;
    }
    return letter;
}

string toLowerString(string s){
    for(int i = 0; i < s.length(); i++){
        s[i] = toLowerChar(s[i]);
    }
    return s;
}

int firstVowelFinder(string sourceString, int stringSize){
    sourceString = toLowerString(sourceString);
    for(int i = 0; i < stringSize; i++){
	if((sourceString[i] == 'a')||(sourceString[i] == 'i')||(sourceString[i]=='u')||(sourceString[i] == 'e')||(sourceString[i] == 'o')){
	    return i;
	}
    }
    return -1;
}

int main(){
    cout << "Please enter string for searching first vowel: " << endl;
    string sourceString = "";
    getline(cin, sourceString);
    cout << endl;
    // Replacement: int stringSize = sourceString.length();
    // Incorrect Practice before : int stringSize = sizeof(sourceString)/sizeof(char);
    // sourceString is an object not a c style string what is char array
    // sizeof() operator will always return 24 or 32
    int stringSize = sourceString.size();
    if(stringSize == 0){
        cout << "Empty String Error!" << endl;
        return -1;
    }else{
        int index =  firstVowelFinder(sourceString,stringSize);
        if(index != -1){
            cout << "The first is #" << index << " letter." << endl;
        }else{
            cout << "No Found Error..." << endl;
        }
        return index;
    }
}


