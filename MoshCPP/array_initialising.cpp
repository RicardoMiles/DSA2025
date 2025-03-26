#include <iostream>
using namespace std;

int main(){
    int arrays[5];
    
    cout << "First line of my program is `int array[5];`" << endl;
    
    cout << "That's element with index 2 in the `arrays` when I am trying to print it rn. -> " << arrays[2] <<endl;
    
    cout << "There are three ways to fix that garbage value in initialising" << endl;

    cout << "Use Empty initialiser like that `int array[5] = {}`" <<

    cout << "Put `int arrays[5];` outside of any function to declare it as global array, Or Use keyword static to declare it into static array like `static int arrays[5]`" << endl;
    
    cout << "Partial initialization by brace intialiser like `int arrays[5] = {10,20}` (<- first two elements was explicitly assigned); Or `int arrays[5] = {[1]=10,[2]:40}`" << endl;
    return 0;
}
