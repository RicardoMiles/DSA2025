#include "Student.h"
#include <iostream>

using namespace std;

    

void Student::setScore(const int& score){
    if(score < 0 || score >150){
        throw invalid_argument("Invalid Score");
    }
    this->score = score;
}
void Student::setName(const string& name){
    if(name == ""){
        throw invalid_argument("Empty Name");
    }
    this->name = name;
}
Student::Student(string name,int score){
    classStudentsNumber++;
    setName(name);
    setScore(score);
    cout << "User defined consturctor get called." << endl;
}

void Student::printInfo() const{
    cout << "Student Name : " << name << "\n"
            "Student Score: " << score << "\n";
}

string Student::getName() const{
    return name;
}
int Student::getScore() const{
    return score;
}

int Student::classStudentsNumber = 0;

int Student::getClassStudentsNumber(){
    return classStudentsNumber;
}
    
