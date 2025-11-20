#include <iostream>
#include <string> 
using namespace std;

int main() {
    string namaDepan, namaBelakang;

    cout << "Masukan nama depan:";
    cin >> namaDepan;
    cout << "Masukan nama belakang:";
    cin >> namaBelakang;

    string kalimat = "halo, "+ namaDepan + " " + namaBelakang + "! Selamat Belajar Algoritma.";
    cout << kalimat << endl;

    return 0;

}
