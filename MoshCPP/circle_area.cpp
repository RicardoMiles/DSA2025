//
//  main.cpp
//  YoutubeCppXcode
//
//  Created by 蒲泓涵 on 1/2/25.
//

#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

int main(){
    double radius;
    cout << "Please enter the radius value of circle: " <<endl;
    cin >> radius;
    
    double circle_area = M_PI * pow(radius, 2);
    cout << "Circle's area is " << circle_area << endl;
    return 0;
}
