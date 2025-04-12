#include <string>

using namespace std;

class Car{
public:
    Car(int year,string name);
    
    void setYear(const int& year);
    void setBrand(const string& brand);
    string getBrand() const;
    int getYear() const;
private:
    string brand;
    int year;
};
