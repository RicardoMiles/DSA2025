#include <iostream>
using namespace std;

void addressOf(){
    int intPrototype = 114514;
    int* intPointer = nullptr;
    intPointer = &intPrototype;
    *intPointer += 4;
    cout << "int intPrototype = 114514;" << endl <<
    "int* intPointer = nullptr;" << endl <<
    "intPointer = &intPrototype;" << endl <<
    "*intPointer += 4;" << endl;
    cout << "Then intPrototype will be " << intPrototype << endl<<endl;
}

void deReferencing(){
    int intPrototype = 114514;
    int* intPointer = &intPrototype;
    int temp = *intPointer;
    cout << "int intPrototype = 114514;" << endl <<
    "int* intPointer = &intPrototype;" << endl <<
    "int temp = *intPointer;" << " This is called dereferencing." <<endl;
    cout << "temp = " << temp << endl<<endl;
}

void mixPointerComprehension(){
    cout << "function 3" << endl<<endl; 
}

int main(){
    addressOf();
    deReferencing();
    mixPointerComprehension();
    return 0;
}
