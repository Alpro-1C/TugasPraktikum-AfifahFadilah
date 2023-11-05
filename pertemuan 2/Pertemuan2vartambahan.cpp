#include <iostream>
using namespace std;
int main() {
    int firstValue = 10;
    int secondValue = 8;
    int temp;

    cout << "menukar kedua variabel menggunakan variabel tambahan" << endl <<endl;
    
    cout << "Sebelum pertukaran:" << endl;
    cout << "firstValue = " << firstValue << endl;
    cout << "secondValue = " << secondValue << endl;

    temp = firstValue;
    firstValue = secondValue;
    secondValue = temp;

    cout << "Setelah pertukaran:" << endl;
    cout << "firstValue = " << firstValue << endl;
    cout << "secondValue = " << secondValue << endl;

    return 0;
}