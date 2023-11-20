#include <iostream>
using namespace std;

// Fungsi untuk menampilkan deret Fibonacci
void tampilkanDeretFibonacci(int deret) {
    int first = 0;
    int second = 1;

    cout << "Deret Fibonacci: " << first << " " << second << " ";

    for (int i = 2; i < deret; i++) {
        int next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }
}

int main() {
    int deret;
    cout << "Masukkan panjang deret Fibonacci: ";
    cin >> deret;

    tampilkanDeretFibonacci(deret);

    return 0;
}
