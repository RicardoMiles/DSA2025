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
   void push_back(T element);
   void pop_back();
   void insert(size_t index,T element);
   T& at(int index);
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