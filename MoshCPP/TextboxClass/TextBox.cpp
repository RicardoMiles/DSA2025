#include "TextBox.h"
#include <iostream>
#include <string>

using namespace std;

string TextBox::getValue(){
    return this->value;
}

void TextBox::setValue(string value){
    if(value == ""){
        throw invalid_argument("Empty value for textbox!");
    }
    this->value = value;
}

TextBox::TextBox(){

}

TextBox::TextBox(const string& value){
    this->setValue(value);
}
