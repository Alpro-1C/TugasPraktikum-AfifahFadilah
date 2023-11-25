#include <iostream>

using namespace std;

int main() {

    //mendeklarasikan bilangan integer
    int nilai;
    
    //memasukkan nilai
    cout << " masukkan nilai anda = ";
    cin >> nilai;
    
    //pengkondisian yang mungkin terjadi
    if (nilai >= 90) {
    cout << "Selamat!! Anda Mendapatkan Nilai A" <<endl;
    }
    else if (nilai >=80 && nilai <=89)  {
    cout << "Selamat Anda Mendapatkan Nilai B" <<endl;
    }
    else if (nilai >=70 && nilai <=78) {
    cout << "Anda Mendapatkan Nilai C" <<endl;
    }
    else if (nilai >=60 && nilai <=68) {
    cout << "Anda Mendapatkan Nilai D" <<endl;
    }
    else if (nilai <60) {
    cout << "Anda Mendapatkan Nilai E" <<endl;
    }
    
    return 0;
}