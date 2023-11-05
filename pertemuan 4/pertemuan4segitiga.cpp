#include <iostream>
using namespace std;
int main() {
    int tinggi;
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi; //menginputkan ketinggian dari segitiga yang ingin di buat

    for (int i = 1; i <= tinggi; i++) {
        // Membuat spasi untuk menyusun segitiga
        for (int j = 1; j <= tinggi - i; j++) {
            cout << " ";
        }

        // Mencetak bintang '*' untuk bagian segitiga
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }

        // Pindah ke baris berikutnya
        cout <<endl;
    }

    return 0;
}
