#ifndef TEXTBOX_H
#define TEXTBOX_H

#include <string>
#include <iostream>

using namespace std;

class TextBox{
public:
    TextBox();
    explicit TextBox(const string& value);
    string getValue();
    void setValue(string value);
private:
    string value;
};

#endif
