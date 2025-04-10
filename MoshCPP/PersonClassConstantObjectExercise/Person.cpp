#include "Person.h"
#include <string>
#include <iostream>

using namespace std;
 
string Person::getName() const{
    return name;
}

void Person::setName(string name){
    if(name == ""){
        throw invalid_argument("Empty Name!");
    }
    this->name = name;
}

int Person::getAge() const{
    return age;
}

void Person::setAge(int age){
    if(age <= 0){
        throw invalid_argument("Invalid Age! ");
    }
    this->age = age;
}

int Person::getPeopleCount() {
    return peopleCount;
}

Person::Person(string name,int age){
    peopleCount ++;
    setName(name);
    setAge(age);
}

int Person::peopleCount = 0;
