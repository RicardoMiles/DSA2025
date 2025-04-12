/*
    Define a class Student that contains member variables name and score, and define a member function printInfo to print the student's information. In the main function, dynamically create a Student object and call the printInfo function through a pointer.
    Hint: Use new and delete.

    Define a class Car that contains member variables brand and year, and define a member function getBrand to return the brand name. In the main function, create a pointer to a Car object and call the getBrand function through the pointer.
    Hint: Pay attention to the initialisation and usage of the pointer.
*/
#ifndef ADVANCED_STUDENT_H
#define ADVANCED_STUDENT_H
#include <string>

using namespace std;

class Student{
public:
    Student(string name,int score);

    void setScore(const int& score);
    void setName(const string& name);
    string getName() const;
    int getScore() const;
    void printInfo() const;

    static int getClassStudentsNumber(); 
private:
    string name;
    int score;

    static int classStudentsNumber;
};

#endif
