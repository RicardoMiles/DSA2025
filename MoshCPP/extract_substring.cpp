#include <iostream>
#include <string>

using namespace std;

int main(){
    string name = "Gabriel Garcia Marquez";
    // Mosh suggested that we should use auto or size_t to store the index 
    // Just in case it is too big
    size_t index = name.rfind(" ");
    string first_name = name.substr(0,index);
    string last_name = name.substr(index+1);

    cout << "First name is " << first_name << endl;
    cout << "Last name is " << last_name << endl;
    
    return 0;
}
