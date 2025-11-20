#include <iostream>
using namespace std;

int main() {
    int arr[7] = {5, 10, 15, 20, 25, 30, 35};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    bool found = false;

    cout << "Masukkan angka yang ingin dicari: ";
    cin >> x;

    int i = 0;

    while (i < n) {
        if (arr[i] == x) {
            cout << "Data ditemukan pada indeks ke-" << i << endl;
            found = true;
            break;
        } 
        else if (arr[i] > x) {
            cout << "Data tidak ditemukan (berhenti lebih cepat pada indeks ke-" << i << ")" << endl;
            found = true;
            break;
        }
        i++;
    }

    if (!found) {
        cout << "Data tidak ditemukan dalam" << endl;
    }

    return 0;
}
