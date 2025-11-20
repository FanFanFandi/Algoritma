#include <iostream>
using namespace std;

int main() {
    int nilai;

    cout << "Masukkan umur: ";
    cin >> nilai;

    if (nilai >= 18) {
        cout << "Dewasa" << endl;
    } else {
        cout << "Belum Dewasa" << endl;
    }

    return 0;
}
