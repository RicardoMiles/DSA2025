#ifndef ADVANCED_SMART_POINTER_H
#define ADVANCED_SMART_POINTER_H

class SmartPointer{
public:
    // My raw implementation below
    // SmartPointer(int* ptr);
    // single argument constructor need explicit as better practice
    explicit SmartPointer(int* ptr);
    ~SmartPointer();

private:
    int* ptr;
};

#endif
