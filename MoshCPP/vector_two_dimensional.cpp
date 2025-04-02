#include <iostream>
#include <string>

using namespace std;

struct Vector2D {
    float x, y;

    // Add another vector
    Vector2D operator+(const Vector2D& other) const {
        Vector2D sum;
        sum.x = x + other.x;
        sum.y = x + other.y;
        return sum;
    }

    // Compare for equality
    bool operator==(const Vector2D& other) const {
        if(x == other.x && y == other.y){
            return true;
        }
        return false;
    }

    // Multiply by scalar (on right)
    Vector2D operator*(float scalar) const {
        Vector2D multiplied_result;
        multiplied_result.x = x * scalar;
        multiplied_result.y = y * scalar;
        return multiplied_result;
    }

    // Print vector
    void print() const {
        cout << "(" << x << ","<< y <<")"<< endl;
    }
};

int main() {
    Vector2D a = {3.0f, 4.0f};
    Vector2D b = {1.0f, 2.0f};

    Vector2D sum = a + b;
    sum.print();  // Should print (4, 6)

    Vector2D scaled = a * 2.0f;
    scaled.print();  // Should print (6, 8)

    if (sum == scaled) {
        cout << "Equal!" << endl;
    } else {
        cout << "Not equal." << endl;
    }
}

