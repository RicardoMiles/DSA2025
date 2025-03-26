#include <iostream>
using namespace std;

int main(){

    cout << "It is minimum value of size_t: " << numeric_limits<size_t>::min() << endl;
    cout << "It is maxmum value of size_t: " << numeric_limits<size_t>::max() << endl;
    cout << "It is minimum value of long long: " << numeric_limits<long long>::min() << endl;
    cout << "It is maxmum value of size_t: " << numeric_limits<long long>::max() << endl;
    return 0;
}
