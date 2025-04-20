#include <iostream>
#include <string>
#include "MyVector.cpp"  // 包含模板定义即可，无需 cpp

using namespace std;

void separator(const string& testName) {
    cout << "\n========== " << testName << " ==========" << endl;
}

int main() {
    // Test 1: Basic push_back and size
    separator("Basic push_back and size");
    MyVector<int> v;
    for (int i = 0; i < 10; ++i) {
        v.push_back(i * 10);
    }
    cout << "Expected size: 10, Got: " << v.size() << endl;

    // Test 2: at() and exception
    separator("Accessing elements with at()");
    try {
        cout << "Element at 2: " << v.at(2) << endl;
        cout << "Element at 10 (should throw): ";
        cout << v.at(10) << endl;
    } catch (const exception& e) {
        cout << "Caught exception: " << e.what() << endl;
    }

    // Test 3: Insert elements
    separator("Insert at position");
    v.insert(5, 99);
    cout << "Inserted 99 at index 5. v.at(5): " << v.at(5) << endl;

    // Test 4: Erase and shifting
    separator("Erase from middle");
    v.erase(5);
    cout << "After erase index 5. v.at(5): " << v.at(5) << " (should be 60)" << endl;

    // Test 5: Pop back
    separator("Pop back");
    v.pop_back();
    cout << "Size after pop_back: " << v.size() << endl;

    // Test 6: Clear
    separator("Clear");
    v.clear();
    cout << "Size after clear: " << v.size() << ", empty: " << v.empty() << endl;

    // Test 7: Pop back on empty vector
    separator("Pop back on empty vector");
    try {
        v.pop_back();  // Should not crash, but silently do nothing
        cout << "No crash on pop_back from empty vector (OK)." << endl;
    } catch (...) {
        cout << "Unexpected crash on empty pop_back!" << endl;
    }

    // Test 8: Insert on empty vector (at index 0)
    separator("Insert into empty vector");
    try {
        v.insert(0, 123);
        cout << "Inserted into empty vector at index 0: " << v.at(0) << endl;
    } catch (const exception& e) {
        cout << "Caught exception: " << e.what() << endl;
    }

    // Test 9: Capacity auto-expansion
    separator("Auto resize on push_back");
    MyVector<int> autoGrow;
    for (int i = 0; i < 1000; ++i) {
        autoGrow.push_back(i);
    }
    cout << "Pushed 1000 elements, final size: " << autoGrow.size()
         << ", final capacity: " << autoGrow.capacity() << endl;

    // Test 10: MyVector with string type
    separator("Template test with string type");
    MyVector<string> vs;
    vs.push_back("Hello");
    vs.push_back("World");
    vs.insert(1, "C++");
    for (size_t i = 0; i < vs.size(); ++i) {
        cout << "vs[" << i << "] = " << vs.at(i) << endl;
    }

    // Test 11: Out-of-bound erase
    separator("Out-of-bound erase");
    try {
        vs.erase(10);
    } catch (const exception& e) {
        cout << "Caught erase exception: " << e.what() << endl;
    }

    // Test 12: Reuse after clear
    separator("Reuse vector after clear");
    vs.clear();
    vs.push_back("Back again");
    cout << "vs[0] = " << vs.at(0) << endl;

    return 0;
}

