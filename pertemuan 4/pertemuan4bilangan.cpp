#include <iostream>

using namespace std;

int main() {

    int angka;
    cout << "Masukkan Angka: ";
    cin >> angka; //menginputkan bilangan positif lebih dari 0

    int totalganjil = 0;
    int totalgenap = 0;
    int totalprima = 0;

    cout << "\nBilangan ganjil antara 1 hingga " << angka << " adalah: "; //menampilkan semua bilangan ganjil dari bilangan yang diinputkan
    for (int i = 0; i <= angka; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
            totalganjil += i; 
        }
    }
  
    cout << "\nBilangan genap antara 1 hingga " << angka << " adalah: "; //menampilkan semua bilangan genap dari bilangan yang diinputkan
    for (int i = 0; i <= angka; i++) {
    for (int i = 2; i <= angka; i += 2 ) {
            cout << i << " ";
            totalgenap += i; 
        }
    }

    cout << "\nBilangan prima antara 1 hingga " << angka << " adalah: "; //menampilkan semua bilangan prima dari bilangan yang diinputkan
    for (int i = 0; i <= angka; i++) {
    for (int i = 2; i <= angka; i++ ) {
            int j;
            for (j = 2; j * j <= i && i % j != 0; j++) {
            }
            if (j * j > i) {
            cout << i << " ";
            totalprima += i; 
            }  
        }    
    }
   
    cout << "\n\nJumlah semua bilangan ganjil antara 1 hingga " << angka <<" adalah: " << totalganjil; //menampilkan hasil penjumlahan dari bilangan ganjil yang ada di atas
    cout << "\nJumlah semua bilangan genap antara 1 hingga " << angka <<" adalah: " << totalgenap; //menampilkan hasil penjumlahan dari bilangan genap yang ada di atas
    cout << "\nJumlah semua bilangan prima antara 1 hingga " << angka <<" adalah: " << totalprima; //menampilkan hasil penjumlahan dari bilangan prima yang ada di atas
     
     
    cout << "\n\nFaktor dari " << totalganjil << " adalah:  "; //menampilkan faktor faktor dari total bilangan ganjil di atas
    for (int i = 1; i <= totalganjil; i++) {
        if (totalganjil % i == 0) {
        cout << i << " "; 
        }
    }
      cout << "\nFaktor dari " << totalgenap << " adalah:  "; //menampilkan faktor faktor dari total bilangan genap di atas
    for (int i = 1; i <= totalgenap; i++) {
        if (totalgenap % i == 0) {
        cout << i << " "; 
        }
    }
     cout << "\nFaktor dari " << totalprima << " adalah:  "; //menampilkan faktor faktor dari total bilangan prima di atas
    for (int i = 1; i <= totalprima; i++) {
        if (totalgenap % i == 0) {
        cout << i << " "; 
        }
    }

 return 0;
}