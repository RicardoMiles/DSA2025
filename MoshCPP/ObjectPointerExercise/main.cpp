/*
    Define a class Student that contains member variables name and score, 
    and define a member function printInfo to print the student's information. 
    In the main function, dynamically create a Student object,
    and call the printInfo function through a pointer.
    Hint: Use new and delete.

    Define a class Car that contains member variables brand and year, 
    and define a member function getBrand to return the brand name. 
    In the main function, create a pointer to a Car object, 
    and call the getBrand function through the pointer.
    Hint: Pay attention to the initialisation and usage of the pointer.
*/

#include "Student.h"
#include "Car.h"
#include <iostream>

using namespace std;

int main(){
    // Student* student_ptr = new Student{"Peter",150};
    // Make sure to call string initialiser to convert string literal to string
    Student* student_ptr = new Student{string{"Peter"},150};
    // Student* student_mry = &(Student{"Mary",120});
    // 👆 Avoid making pointers work with temporary
    Student mary = Student{string{"Mary"},120};
    Student* student_mry = &mary;
    student_ptr->printInfo();
    (*student_mry).printInfo();
    cout << "Students number in current class: " << Student::getClassStudentsNumber() << endl;

    Car modelT = Car{1908,string{"Ford"}};
    Car* modelT_ptr = &modelT;
    cout << "The car's brand is " << modelT_ptr->getBrand() << endl;

    delete student_ptr;
    student_ptr = nullptr;

    return 0;
}
