#include <iostream>
using namespace std;

int main() {
    int nilai;
    string operasi;

    cout << "Masukkan nilai ujian: ";
    cin >> nilai;

    if (nilai >= 60) {
        cout << "Lulus" << endl;
    } else {
        cout << "Tidak Lulus" << endl;
    }

    return 0;
}
