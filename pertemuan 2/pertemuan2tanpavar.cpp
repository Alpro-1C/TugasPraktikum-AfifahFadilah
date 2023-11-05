#include <iostream>

using namespace std;

int main() {
    int firstValue = 10;
    int secondValue = 8;

    cout << "menukar kedua variabel tanpa menggunakan variabel tambahan" <<endl <<endl;

    cout << "Sebelum pertukaran:" <<endl;
    cout << "firstValue = " << firstValue <<endl;
    cout << "secondValue = " << secondValue <<endl;

    firstValue = firstValue + secondValue;
    secondValue = firstValue - secondValue;
    firstValue = firstValue - secondValue;

    cout << "Setelah pertukaran:" <<endl;
    cout << "firstValue = " << firstValue <<endl;
    cout << "secondValue = " << secondValue <<endl;

return 0;
}