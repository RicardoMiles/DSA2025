/*
Exercise 8: Smart Pointers
1. Implement a program that meets the following requirements:
2. Use std::unique_ptr to create several instances of MyClass.
3. Transfer the ownership of these unique_ptr<MyClass> objects to a std::vector<std::shared_ptr<MyClass>>.
4. Iterate over the vector and call the display() member function on each object.
5. Finally, check whether the original unique_ptrs are empty and print a message indicating that their ownership has been released.
*/
#include <iostream>
#include <vector>
#include <memory>

using namespace std;

class MyClass {
public:
    MyClass(int v){
        this->setValue(v);
        cout << "Construtor called to put value " << v << " for object initialisation.\n";
    }
    ~MyClass(){
        cout << "My Class object is destroyed!\n";
    }
    void setValue(const int& valueInput){
        this->value = valueInput;
    }
    void display() const{
        cout << "My Class object contains value: " << this->value << "\n";
    }

private:
    int value;
};

int main(){
    unique_ptr<MyClass> unique_ptr_first = make_unique<MyClass>(9527);
    unique_ptr<MyClass> unique_ptr_second = make_unique<MyClass>(8888);
    unique_ptr<MyClass> unique_ptr_third = make_unique<MyClass>(998);
    vector<shared_ptr<MyClass>> shared_ptr_vec;
    shared_ptr_vec.clear();
    shared_ptr_vec.push_back(move(unique_ptr_first));
    shared_ptr_vec.push_back(move(unique_ptr_second));
    shared_ptr_vec.push_back(move(unique_ptr_third));
    for(int i = 0; i < 3; i++){
        shared_ptr_vec[i]->display();
    }
    if (!unique_ptr_first && !unique_ptr_second && !unique_ptr_third) {
        cout << "All unique pointers are now empty after move." << endl;
    }
    return 0;
}
    