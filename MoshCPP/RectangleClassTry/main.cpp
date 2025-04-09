#include "Rectangle.h"
#include <iostream>

using namespace std;

int main(){
    Rectangle rectangle;
    rectangle.setWidth(10);
    rectangle.setHeight(20);
    rectangle.draw();
    cout << rectangle.getArea() << endl;

    return 0;
}