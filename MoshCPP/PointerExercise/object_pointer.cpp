/*
Exercise 7: Pointer to Class Objects
1. Create a class with a member function and a data member.
2. Use a pointer to dynamically allocate an object of the class.
3. Access the member function and data member using the pointer.
*/

#include <iostream>

using namespace std;

class GenBaoli{
public:
    GenBaoli(){
        this->setAge(22);
    }
    int getAge() const{
        return this->age;
    }
    void setAge(const int& ageInput){
        if(ageInput<0 || ageInput>99){
            throw invalid_argument("Invalid age input\n");
        }
        this->age = ageInput;
    }
private:
    int age;
};

int main()
{
    GenBaoli* pony_ptr = new GenBaoli();
    int defaultAge = pony_ptr->getAge();
    cout << "Default Age of Little Pony is \n" << defaultAge << endl; 
    pony_ptr->setAge(23);
    int currentAge = pony_ptr->getAge();
    cout << "Currently Little Pony is \n" << currentAge;

    delete pony_ptr;
    pony_ptr = nullptr;

    return 0;
}
