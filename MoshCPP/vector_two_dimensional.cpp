#include <iostream>
#include <string>

using namespace std;

struct Vector2D {
    float x, y;

    // Add another vector
    Vector2D operator+(const Vector2D& other) const {
        
    }

    // Compare for equality
    bool operator==(const Vector2D& other) const {
        
    }

    // Multiply by scalar (on right)
    Vector2D operator*(float scalar) const {
        
    }

    // Print vector
    void print() const {
        
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

