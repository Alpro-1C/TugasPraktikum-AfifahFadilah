#include <iostream>

using namespace std;

int main() {
    int firstValue;
    int secondValue;

    cout << "menukar kedua variabel tanpa menggunakan variabel tambahan" <<endl <<endl;
    cout <<"Masukkan nilai pertama: ";
    cin >> firstValue;
    cout <<"Masukkan nilai kedua: ";
    cin >> secondValue;

    cout << "Sebelum pertukaran:" <<endl;
    cout << "nilai pertama = " << firstValue <<endl;
    cout << "nilai kedua = " << secondValue <<endl;

    firstValue = firstValue + secondValue;
    secondValue = firstValue - secondValue;
    firstValue = firstValue - secondValue;

    cout << "Setelah pertukaran:" <<endl;
    cout << "nilai pertama = " << firstValue <<endl;
    cout << "nilai kedua = " << secondValue <<endl;

return 0;
}