//
//  main.cpp
//  YoutubeCppXcode
//
//  Created by 蒲泓涵 on 1/2/25.
//

#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    long elapsed_seconds = time(nullptr); //null pointer is a special argument here
    srand(elapsed_seconds); // srand is short for seed random
    int number = rand() % 10; // use modulus operator to set the upper limit, %10 means not larger than 10
    cout << number << endl;
}
