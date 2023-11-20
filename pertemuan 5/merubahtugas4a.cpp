#include <iostream>

using namespace std;

// Fungsi untuk menampilkan bilangan ganjil
void tampilkanBilanganGanjil(int angka) {
    cout << "\nBilangan ganjil antara 1 hingga " << angka << " adalah: ";
    int totalganjil = 0;
    for (int i = 1; i <= angka; i += 2) {
        cout << i << " ";
        totalganjil += i;
    }
    cout << "\nJumlah semua bilangan ganjil antara 1 hingga " << angka << " adalah: " << totalganjil;
    cout << "\nFaktor dari " << totalganjil << " adalah: ";
    for (int i = 1; i <= totalganjil; i++) {
        if (totalganjil % i == 0) {
            cout << i << " ";
        }
    }
}

// Fungsi untuk menampilkan bilangan genap
void tampilkanBilanganGenap(int angka) {
    cout << "\nBilangan genap antara 1 hingga " << angka << " adalah: ";
    int totalgenap = 0;
    for (int i = 2; i <= angka; i += 2) {
        cout << i << " ";
        totalgenap += i;
    }
    cout << "\nJumlah semua bilangan genap antara 1 hingga " << angka << " adalah: " << totalgenap;
    cout << "\nFaktor dari " << totalgenap << " adalah: ";
    for (int i = 1; i <= totalgenap; i++) {
        if (totalgenap % i == 0) {
            cout << i << " ";
        }
    }
}

// Fungsi untuk menampilkan bilangan prima
void tampilkanBilanganPrima(int angka) {
    cout << "\nBilangan prima antara 1 hingga " << angka << " adalah: ";
    int totalprima = 0;
    for (int i = 2; i <= angka; i++) {
        int j;
        for (j = 2; j * j <= i && i % j != 0; j++) {
        }
        if (j * j > i) {
            cout << i << " ";
            totalprima += i;
        }
    }
    cout << "\nJumlah semua bilangan prima antara 1 hingga " << angka << " adalah: " << totalprima;
    cout << "\nFaktor dari " << totalprima << " adalah: ";
    for (int i = 1; i <= totalprima; i++) {
        if (totalprima % i == 0) {
            cout << i << " ";
        }
    }
}

int main() {
    int angka;
    cout << "Masukkan Angka: ";
    cin >> angka;

    tampilkanBilanganGanjil(angka);
    tampilkanBilanganGenap(angka);
    tampilkanBilanganPrima(angka);

    return 0;
}
