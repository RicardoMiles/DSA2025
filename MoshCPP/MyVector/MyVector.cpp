#include "MyVector.h"
#include <cstddef>
#include <stdexcept>

#define VEC_MIN_CAP 5

template<typename T>
MyVector<T>::MyVector(){
    this->arrayHead = new T[VEC_MIN_CAP];
    this->arrayCapacity = VEC_MIN_CAP;
    this->arraySize = 0;
}

template<typename T>
MyVector<T>::MyVector(size_t size){
    this->arrayHead = new T[size];
    this->arraySize = 0;
    this->arrayCapacity = size;
}

template<typename T>
MyVector<T>::MyVector(size_t size, T initialValue){
    this->arrayHead = new T[size];
    this->arraySize = size;
    this->arrayCapacity = size;
    for(size_t i = 0; i < arraySize ; i++){
        arrayHead[i] = initialValue;
    }
}

// Copy Constructor
template<typename T>
MyVector<T>::MyVector(const MyVector<T>& other) {
    this->arraySize = other.arraySize;
    this->arrayCapacity = other.arrayCapacity;
    this->arrayHead = new T[this->arrayCapacity];
    for (size_t i = 0; i < this->arraySize; ++i) {
        this->arrayHead[i] = other.arrayHead[i];
    }
}

template<typename T>
void MyVector<T>::push_back(T element){
    if(this->isFull()){
        this->resizeArray();
    }
    this->arrayHead[this->arraySize] = element;
    this->arraySize ++;
}

template<typename T>
void MyVector<T>::pop_back(){
    if (this->arraySize > 0) {
        this->arraySize--;
    }else{
        throw invalid_argument("Empty Vector! Nothing available to pop back");
    }
}

template<typename T>
void MyVector<T>::insert(size_t index,T element){
    if(index > arraySize){
        throw invalid_argument("Outbound insertion! ");
    }
    if(this->isFull()){
        this->resizeArray();
    }
    if(index == this->arraySize){
        this->arrayHead[index] = element;
        this->arraySize++; 
    }else{
        T* tempHead = new T[this->arrayCapacity];
        for(size_t i = 0; i < index; i++){
            tempHead[i] = (this->arrayHead)[i];
        }
        tempHead[index] = element;
        for(size_t i= index + 1; i< (this->arraySize+1); i++){
            tempHead[i] = (this->arrayHead)[i];
        }
        delete[] this->arrayHead;
        this->arrayHead = tempHead;
        this->arraySize++;
    }
}

template<typename T>
T& MyVector<T>::at(size_t index){
    if(index >= (this->arraySize)){
        throw invalid_argument("Outbound Vector");
    }
    if(index < 0){
        throw invalid_argument("Invalid Index");
    }
    return this->arrayHead[index];
}

template<typename T>
size_t MyVector<T>::size(){
    return this->arraySize;
}

template<typename T>
size_t MyVector<T>::capacity(){
    return this->arrayCapacity;
}

template<typename T>
void MyVector<T>::clear(){
    delete[] this->arrayHead;
    this->arrayHead = nullptr;
    this->arraySize = 0;
    this->arrayCapacity = 0;
}

template<typename T>
bool MyVector<T>::empty() const{
    if((this->arraySize) == 0){
        return true;
    }else{
        return false;
    }
}

template<typename T>
bool MyVector<T>::isFull() const{
    if(this->arraySize == this->arrayCapacity){
        return true;
    }else{
        return false;
    }
}

template<typename T>
void MyVector<T>::resizeArray(){
    if(this->arrayCapacity == 0){
        this->arrayHead = new T[VEC_MIN_CAP];
        this->arrayCapacity = VEC_MIN_CAP;
        this->arraySize = 0;
    }
    T* tempHead = new T[2*(this->arrayCapacity)];
    for(size_t i =0;i < this->arraySize;i++){
        tempHead[i] = (this->arrayHead)[i];
    }
    delete[] this->arrayHead;
    this->arrayHead = tempHead;
    this->arrayCapacity = 2*(this->arrayCapacity);
}

template<typename T>
void MyVector<T>::erase(size_t index){
    if(index >= this->arraySize){
        throw invalid_argument("Outbound vector");
    }
    if(index == ((this->arraySize)-1)){
        this->arraySize = this->arraySize -1;
    }else{
        T* tempHead = new T[this->arrayCapacity];
        for(size_t i = 0; i < index; i++){
            tempHead[i] = (this->arrayHead)[i];
        }
        for(size_t i= index; i< (this->arraySize-1); i++){
            tempHead[i] = (this->arrayHead)[i+1];
        }
        delete[] this->arrayHead;
        this->arrayHead = tempHead;
        this->arraySize = this->arraySize -1;
    }
}