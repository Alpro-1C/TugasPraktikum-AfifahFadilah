#include <iostream>
using namespace std;
int main() {
    int deret;
    cout << "Masukkan panjang deret Fibonacci: ";
    cin >> deret;

    int first = 0;
    int second = 1;

    cout << "Deret Fibonacci: " << first << " " << second << " ";

    for (int i = 2; i < deret; i++) {
        int next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }

    return 0;
}
