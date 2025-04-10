#include "SmartPointer.h"

SmartPointer::SmartPointer(int* ptr){ 
    this->ptr = ptr;
}

SmartPointer::~SmartPointer(){
    delete ptr;
    ptr = nullptr;
}

