#ifndef ADVANCED_PERSON_H
#define ADVANCED_PERSON_H

#include <iostream>
#include <string>

using namespace std;

class Person{
public:
    Person(string name,int age);
    // string getName() const;
    // wrong declaration above
    string getName() const;
    void setName(string name);
    int getAge() const;
    void setAge(int age);

    static int getPeopleCount();

private:
    string name;
    int age;
    
    static int peopleCount;
};




#endif
