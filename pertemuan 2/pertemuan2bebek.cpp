#include <iostream>
using namespace std;

int main() {
    int N = 45; // Jumlah bebek
    int M = 7;  // Jumlah teman

    int ekorPerTeman = N / M;
    int sisaBebek = N % M;
    cout << "Pak tatang memiliki " << N << " ekor bebek." << endl;
    cout << "Pak tatang ingin membagi rata bebek tersebut kepada " << M << " orang teman nya maka:" <<endl <<endl;
    
    cout << "Setiap teman akan menerima " << ekorPerTeman << " ekor bebek." << endl;
    cout<< "Sisa bebek yang tidak terbagi adalah " << sisaBebek << " ekor." << endl;

    return 0;
}