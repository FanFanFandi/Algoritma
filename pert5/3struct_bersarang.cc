#include <iostream>
#include <string>
using namespace std;

struct Alamat {
    string kota;
    string provinsi;
};

struct Mahasiswa {
    string nama;
    string nim;
    Alamat alamat;
};

void isiDataMahasiswa(Mahasiswa &mhs) {
    cout << "Masukkan NIM       : ";
    getline(cin, mhs.nim);

    cout << "Masukkan Nama      : ";
    getline(cin, mhs.nama);

    cout << "Masukkan Kota      : ";
    getline(cin, mhs.alamat.kota);

    cout << "Masukkan Provinsi  : ";
    getline(cin, mhs.alamat.provinsi);
}

void tampilkanDataMahasiswa(const Mahasiswa &mhs) {
    cout << "===== Data Mahasiswa =====" << endl;
    cout << "NIM      : " << mhs.nim << endl;
    cout << "Nama     : " << mhs.nama << endl;
    cout << "Kota     : " << mhs.alamat.kota << endl;
    cout << "Provinsi : " << mhs.alamat.provinsi << endl;
}

int main() {
    Mahasiswa mhs;

        cout << "===== Mengisi Data Mahasiswa =====\n";
        isiDataMahasiswa(mhs);

        cout << "===== Data yang Telah Diisi =====\n";
        tampilkanDataMahasiswa(mhs);


    cout << "Program selesai. Terima kasih!" << endl;
    return 0;
}