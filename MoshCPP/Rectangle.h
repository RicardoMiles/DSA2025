#ifndef ADVANCED_RECTANGLE_H
// if this constant is not defined
#define ADVANCED_RECTANGLE_H
// we are gonna define it 
// prevent this headerfile being included multiple time
// in the compilation process
class Rectangle{
public:
    void draw();
    int getArea();
    int getWidth();
    void setWidth();
    int getHeight();
    void setHeight();
private:
    int width;
    int height;
};

#endif // ADVANCED_RECTANGLE_H
