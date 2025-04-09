#include "Rectangle.h"
#include <iostream>

/*
    Here we have to qualify the draw() function
    With its class name
    Double colon :: is called scope resolution operator
*/
using namespace std;

void Rectangle::draw(){ 
    cout << "Drawing a rectangle" << endl;
    cout << "Its width is "<< width << ", its height is " << height << "\n";
}

int Rectangle::getArea(){
    return width * height ;
}

void Rectangle::setHeight(int heightInput){
    if(height < 0){
        throw invalid_argument("Height Error");
    }
    height = heightInput;
}

void Rectangle::setWidth(int widthInput){
    if(width < 0){
        throw invalid_argument("Width Error");
    }
    width = widthInput;
}

int Rectangle::getHeight(){
    return height;
}

int Rectangle::getWidth(){
    return width;
}
