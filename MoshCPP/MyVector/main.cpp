#include <iostream>
#include "MyVector.cpp"  

int main() {
    MyVector<int> v;

    // Test push_back
    for (int i = 0; i < 10; ++i) {
        v.push_back(i);
    }

    std::cout << "Size after push_back: " << v.size() << std::endl;

    // Test at
    std::cout << "Element at 5: " << v.at(5) << std::endl;

    // Test insert
    v.insert(3, 99);
    std::cout << "Element at 3 after insert: " << v.at(3) << std::endl;

    // Test erase
    v.erase(3);
    std::cout << "Element at 3 after erase: " << v.at(3) << std::endl;

    // Test pop_back
    v.pop_back();
    std::cout << "Size after pop_back: " << v.size() << std::endl;

    // Test clear
    v.clear();
    std::cout << "Size after clear: " << v.size() << ", empty: " << v.empty() << std::endl;

    return 0;
}
