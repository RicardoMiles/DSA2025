#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

string doubleStringConverter(const double& number, const int& precision){
    stringstream stream;
    stream << fixed << setprecision(precision) << number;
    string str = stream.str();
    return str;
}

int main(){
    cout << "Please enter a double: \n";
    double number = 0.0;
    cin >> number;
    cout << "Please enter a precision:\n";
    int precision = 0;
    cin >> precision;
    string str = doubleStringConverter(number,precision);
    cout << str << endl;
    return 0;
}