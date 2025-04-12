#ifndef ADVANCED_CAR_H
#define ADVANCED_CAR_H

#include "Car.h"
#include <iostream>

using namespace std;

void Car::setYear(const int& year){
    if(year < 1800 || year >2025){
        throw invalid_argument("Invalid Year");
    }
    this->year = year;
}
void Car::setBrand(const string& brand){
    if(brand == ""){
        throw invalid_argument("Empty Brand");
    }
    this->brand = brand;
}

Car::Car(int year,string brand){
    setYear(year);
    setBrand(brand);
    cout << "User-defined constructor used." << endl;
}
    

string Car::getBrand() const{
    return brand;
}
int Car::getYear() const{
    return year;
}

#endif