#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float ipk;
};

void tampilData(const Mahasiswa &mhs) {
    cout << "===== Data Mahasiswa =====" << endl;
    cout << "NIM   : " << mhs.nim << endl;
    cout << "Nama  : " << mhs.nama << endl;
    cout << "IPK   : " << mhs.ipk << endl;
}

int main() {
    Mahasiswa mhs;
    char ulang;

    do {
        cout << "===== Input Data Mahasiswa =====" << endl;
        cout << "Masukkan NIM   : ";
        cin.ignore();
        getline(cin, mhs.nim);
        cout << "Masukkan Nama  : ";
        getline(cin, mhs.nama);
        cout << "Masukkan IPK   : ";
        cin >> mhs.ipk;

        tampilData(mhs);

        cout << "Apakah ingin input data lagi? (y/n): ";
        cin >> ulang;
        cin.ignore();

    } while (ulang == 'y' || ulang == 'Y');

    cout << "Program selesai. Terima kasih!" << endl;
    return 0;
}