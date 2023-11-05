#include <iostream>

using namespace std;

int main() {

    //membuat pilihan bentuk yang diingin di hitung luasnya
    int pilihan;
    cout << "Pilih bentuk yang ingin dihitung luasnya: " <<endl;
    cout << "1. Persegi " <<endl;
    cout << "2. Persegi Panjang " <<endl;
    cout << "3. Segitiga " <<endl;
    cin >> pilihan;

    double luas;
    //membuat switch dari pilihan yang berada dalam pilihan 1,2 dan 3
    switch (pilihan) {
        case 1: // Persegi
            double sisi;
            cout << "Masukkan panjang sisi: ";
            cin >> sisi;
            luas = sisi * sisi;
            break;

        case 2: // Persegi Panjang
            double panjang, lebar;
            cout << "Masukkan panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar: ";
            cin >> lebar;
            luas = panjang * lebar;
            break;

        case 3: // Segitiga
            double alas, tinggi;
            cout << "Masukkan panjang alas: ";
            cin >> alas;
            cout << "Masukkan tinggi: ";
            cin >> tinggi;
            luas = 0.5 * alas * tinggi;
            break;

        default:
            cout << "Pilihan tidak berada dalam daftar" << endl;
            return 1;
    }

    cout << "Luasnya adalah: " << luas << endl;

    return 0;
}