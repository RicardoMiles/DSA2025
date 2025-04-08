#ifndef ADVANCED_RECTANGLE_H
// if this constant is not defined
#define ADVANCED_RECTANGLE_H
// we are gonna define it 
// prevent this headerfile being included multiple time
// in the compilation process
class Rectangle{
    int width;
    int height;
    void draw();
    int getArea();
    // here we only got function declaration
    // or aka function prototype
    // the actual implementation is gonna go our cpp file

};

#endif // ADVANCED_RECTANGLE_H
