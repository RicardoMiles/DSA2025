#include "Person.h"

using namespace std;

int main(){
    const Person meow = Person("Meow",10000);
    Person diaodian = Person("JunjieWei",9999);
    cout << "People Count = " << Person::getPeopleCount() << endl;
    return 0;
}
