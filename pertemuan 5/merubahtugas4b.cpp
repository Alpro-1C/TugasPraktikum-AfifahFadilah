#include <iostream>
using namespace std;


void tampilkanSegitiga(int tinggi){

   cout <<"Deret fibonacci: "<<endl;
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
}

int main() {
    int tinggi;
    cout <<"Masukkan Tinggi Segitiga: "; //menginputkan ketinggian yang ingin di buat
    cin >> tinggi;

   tampilkanSegitiga(tinggi);

   return 0;
}
