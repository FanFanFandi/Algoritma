#include <iostream>
using namespace std;

enum Akun { Dosen = 1, Mahasiswa };

int main() {
    int pilihan;
    Akun akunPilihan;

    cout << "Pilih jenis akun:\n";
    cout << "1. Dosen\n";
    cout << "2. Mahasiswa\n";
    cout << "Masukkan pilihan (1 atau 2): ";
    cin >> pilihan;

    akunPilihan = static_cast<Akun>(pilihan);

    if (akunPilihan == Dosen) {
        cout << "Anda memilih akun: Dosen" << endl;
    } 
    else if (akunPilihan == Mahasiswa) {
        cout << "Anda memilih akun: Mahasiswa" << endl;
    } 
    else {
        cout << "Pilihan tidak valid." << endl;
    }

    return 0;
}