#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float nilai;
};

int main() {
    Mahasiswa mhs;

    mhs.nama = "FanFanFan";
    mhs.nim = "20250801064";
    mhs.nilai = 90,5;

    cout << "NIM   : " << mhs.nim << endl;
    cout << "NAMA  : " << mhs.nama << endl;
    cout << "NILAI : " << mhs.nilai << endl;

    return 0;
}