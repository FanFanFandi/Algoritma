#include <iostream>
#include <string>
using namespace std;

struct MataKuliah {
    string kode;
    string nama;
    int sks;
    string dosen;
};

int main() {
    MataKuliah mk[100];
    int jumlah = 0;
    int pilihan;

    do {
        cout << "\n=== SISTEM PERKULIAHAN ===\n";
        cout << "1. Tambah Mata Kuliah\n";
        cout << "2. Tampilkan Mata Kuliah\n";
        cout << "3. Ubah Mata Kuliah\n";
        cout << "4. Hapus Mata Kuliah\n";
        cout << "5. Keluar\n";
        cout << "6. Filter Mata Kuliah (berdasarkan SKS)\n";
        cout << "Pilih: ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "\nInput Kode MK   : ";
            cin >> mk[jumlah].kode;
            cin.ignore();

            cout << "Input Nama MK   : ";
            getline(cin, mk[jumlah].nama);

            cout << "Input SKS       : ";
            cin >> mk[jumlah].sks;
            cin.ignore();

            cout << "Input Dosen     : ";
            getline(cin, mk[jumlah].dosen);

            jumlah++;
            cout << "Data berhasil ditambahkan!\n";
        }
        else if (pilihan == 2) {
            cout << "\n=== DAFTAR MATA KULIAH ===\n";
            if (jumlah == 0) {
                cout << "Data masih kosong.\n";
            } else {
                for (int i = 0; i < jumlah; i++) {
                    cout << "\nKode  : " << mk[i].kode << endl;
                    cout << "Nama  : " << mk[i].nama << endl;
                    cout << "SKS   : " << mk[i].sks << endl;
                    cout << "Dosen : " << mk[i].dosen << endl;
                }
            }
        }
        else if (pilihan == 3) {
            string cari;
            bool ketemu = false;

            cout << "\nMasukkan Kode MK yang ingin diubah: ";
            cin >> cari;
            cin.ignore();

            for (int i = 0; i < jumlah; i++) {
                if (mk[i].kode == cari) {
                    cout << "Nama MK baru   : ";
                    getline(cin, mk[i].nama);

                    cout << "SKS baru       : ";
                    cin >> mk[i].sks;
                    cin.ignore();

                    cout << "Dosen baru     : ";
                    getline(cin, mk[i].dosen);

                    ketemu = true;
                    cout << "Data berhasil diubah!\n";
                    break;
                }
            }
            if (!ketemu) {
                cout << "Data tidak ditemukan.\n";
            }
        }
        else if (pilihan == 4) {
            string cari;
            bool ketemu = false;

            cout << "\nMasukkan Kode MK yang ingin dihapus: ";
            cin >> cari;

            for (int i = 0; i < jumlah; i++) {
                if (mk[i].kode == cari) {
                    for (int j = i; j < jumlah - 1; j++) {
                        mk[j] = mk[j + 1];
                    }
                    jumlah--;
                    ketemu = true;
                    cout << "Data berhasil dihapus!\n";
                    break;
                }
            }
            if (!ketemu) {
                cout << "Data tidak ditemukan.\n";
            }
        }
        else if (pilihan == 6) {
            int cariSKS;
            bool ada = false;

            cout << "\nMasukkan jumlah SKS yang ingin difilter: ";
            cin >> cariSKS;

            cout << "\n=== HASIL FILTER SKS " << cariSKS << " ===\n";
            for (int i = 0; i < jumlah; i++) {
                if (mk[i].sks == cariSKS) {
                    cout << "\nKode  : " << mk[i].kode << endl;
                    cout << "Nama  : " << mk[i].nama << endl;
                    cout << "SKS   : " << mk[i].sks << endl;
                    cout << "Dosen : " << mk[i].dosen << endl;
                    ada = true;
                }
            }

            if (!ada) {
                cout << "Tidak ada mata kuliah dengan SKS tersebut.\n";
            }
        }
        else if (pilihan == 5) {
            cout << "Program selesai. Terima kasih.\n";
        }
        else {
            cout << "Pilihan tidak valid!\n";
        }

    } while (pilihan != 5);

    return 0;
}