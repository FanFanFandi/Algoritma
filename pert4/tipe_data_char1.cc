#include <iostream>
using namespace std;

int main() {
    int a; 
    int b, c;
    double d;
    double hasil;
    bool jalan = true;

    cout << "=== Ini adalah program operasi aritmatika ===" << endl;

    while (jalan) {
        cout << "\nSilahkan pilih mau operasi apa:" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Keluar" << endl;
        cout << "Masukkan pilihan: ";
        cin >> a;

        if (a == 5) {
            cout << "Program dihentikan. Terima kasih sudah menggunakan program ini." << endl;
            break;
        }

        cout << "Masukkan bilangan bulat pertama: ";
        cin >> b;
        cout << "Masukkan bilangan bulat kedua: ";
        cin >> c;
        cout << "Masukkan bilangan desimal: ";
        cin >> d;

        if (a == 1) {
            hasil = b + c + d;
            cout << "Hasil penjumlahan adalah = " << hasil << endl;
        }
        else if (a == 2) {
            hasil = b - c - d;
            cout << "Hasil pengurangan adalah = " << hasil << endl;
        }
        else if (a == 3) {
            hasil = b * c * d;
            cout << "Hasil perkalian adalah = " << hasil << endl;
        }
        else if (a == 4) {
            if (c == 0 || d == 0) {
                cout << "Error: Pembagian dengan nol tidak diperbolehkan!" << endl;
            } else {
                hasil = b / (c * d);
                cout << "Hasil pembagian adalah = " << hasil << endl;
            }
        }
        else {
            cout << "Pilihan tidak ada." << endl;
        }

        cout << "\n=============================================" << endl;
    }

    return 0;
}
