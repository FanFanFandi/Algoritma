#include <iostream>
#include <string>
using namespace std;

int main() {
    int angka1, angka2, hasil;
    string operasi;

    cout << "Masukan angka pertama: ";
    cin >> angka1;

    cout << "Masukan angka kedua: ";
    cin >> angka2;

    cout << "Masukan operasi (contoh: tambah): ";
    cin >> operasi;

    if (operasi == "tambah") {
        hasil = angka1 + angka2;
        cout << "Hasil penjumlahan: " << hasil << endl;
    } else {
        cout << "Pesan Error: Operasi tidak dikenali" << endl;
    }

    return 0;
}
