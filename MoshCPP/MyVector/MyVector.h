#ifndef ADVANCED_MYVECTOR_H
#define ADVANCED_MYVECTOR_H

#include <cstddef>
using namespace std;

template<typename T>
// Right now T could be any type variable
class MyVector{
public:
    MyVector();
    MyVector(size_t size);
    MyVector(size_t size, T initialValue);
    MyVector(const MyVector<T>& other);
   
    MyVector<T>& operator=(const MyVector<T>& other) {
        if (this == &other) return *this;

        delete[] this->arrayHead;

        this->arraySize = other.arraySize;
        this->arrayCapacity = other.arrayCapacity;
        this->arrayHead = new T[this->arrayCapacity];
        for (size_t i = 0; i < this->arraySize; ++i) {
            this->arrayHead[i] = other.arrayHead[i];
        }

        return *this;
    }

    void push_back(T element);
    void pop_back();
    void insert(size_t index,T element);
    T& at(size_t index);
    size_t size();
    size_t capacity(); 
    void erase(size_t index);
    void clear();
    bool empty() const;
    bool isFull() const;
    void resizeArray();
private:
    T* arrayHead;
    size_t arraySize = 0;
    size_t arrayCapacity = 0;
};

#endif