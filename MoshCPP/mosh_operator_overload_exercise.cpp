/*
Define a structure for representing a point.
- X
- Y
Overload the equality (==) and stream insertion operators («<)
for points.
*/
#include <iostream>

using namespace std;

struct Point{
    int x ;
    int y ;
};

bool operator==(const Point& pointOne,const Point& pointTwo){
    return(pointOne.x == pointTwo.x && pointOne.y == pointTwo.y);
}

ostream& operator<<(ostream& stream,const Point& point){
    stream << "(" << point.x << "," << point.y << ")";
    return stream;
}

int main(){
    Point one = {6,8};
    Point two = {6,8};

    if(one == two){
        cout << "Equal" << endl;
    }

    cout << one;

    return 0;
}
