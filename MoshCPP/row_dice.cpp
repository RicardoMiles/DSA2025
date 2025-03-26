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
    srand(time(nullptr));
    int result = rand() % 5 + 1;
    cout << "Row your dice as " << result << endl;
}
