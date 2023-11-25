#include <iostream>
using namespace std;
int main() {
    int firstValue;
    int secondValue;
    int temp;

    cout << "menukar kedua variabel menggunakan variabel tambahan" << endl <<endl;
    
    cout << "Sebelum pertukaran:" << endl;
    cout << "nilai pertama = ";
    cin >> firstValue;
    cout << "nilai kedua = ";
    cin >> secondValue;

    temp = firstValue;
    firstValue = secondValue;
    secondValue = temp;

    cout << "Setelah pertukaran:" << endl;
    cout << "nilai pertama = " << firstValue << endl;
    cout << "nilai kedua = " << secondValue << endl;

    return 0;
}