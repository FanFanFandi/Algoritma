#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    float nilai_akhir;
};

int main() { 
    Mahasiswa mhs [5];
    float total = 0;
    float rata_rata;

    cout << "===== Input Data 5 Mahasiswa =====" << endl;
     for (int i = 0; i < 5; i++) {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Masukkan Nama        : ";
        cin.ignore();
        getline(cin, mhs[i].nama);
        cout << "Masukkan Nilai Akhir : ";
        cin >> mhs[i].nilai_akhir;
        total += mhs[i].nilai_akhir;
    }

    rata_rata = total / 5;
    
    cout << "====== Hasil perhitungan =====" << endl;
    cout << "Total Nilai Kelas  : " << total << endl;
    cout << "Rata-rata Kelas    : " << rata_rata << endl;

    return 0;
}