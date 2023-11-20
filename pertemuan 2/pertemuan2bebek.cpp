#include <iostream>
using namespace std;

int main() {
    int N, // Jumlah bebek
    M; // Jumlah teman
    
    cout <<"Masukkan Jumlah Bebek Yang Pak Tatang Punya: ";
    cin >> N;
    cout <<"Masukkan Jumlah Teman Pak Tatang: ";
    cin >> M;
    cout << "Pak tatang memiliki " << N << " ekor bebek." << endl;
    cout << "Pak tatang ingin membagi rata bebek tersebut kepada " << M << " orang teman nya maka:" <<endl <<endl;

    int ekorPerTeman = N / M;
    int sisaBebek = N % M;

    cout << "Setiap teman akan menerima " << ekorPerTeman << " ekor bebek." << endl;
    cout<< "Sisa bebek yang tidak terbagi adalah " << sisaBebek << " ekor." << endl;

    return 0;
}