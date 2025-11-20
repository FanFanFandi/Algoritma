#include <iostream>
#include <string>
using namespace std;

int main() {
    int angka1, angka2, hasil;
    string operasi;

    cout << "Masukan panjang: ";
    cin >> angka1;

    cout << "Masukan lebar: ";
    cin >> angka2;

    cout << "Masukan operasi (kali): ";
    cin >> operasi;

    if (operasi == "kali") {
        hasil = angka1 * angka2;
        cout << "Hasil perkalian: " << hasil << endl;
    } else {
        cout << "Pesan Error: Operasi tidak dikenali" << endl;
    }

    return 0;
}
