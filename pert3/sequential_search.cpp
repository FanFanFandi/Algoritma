#include <iostream>
using namespace std;

int main() {
    int arr[5] = {5, 10, 15, 20, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    bool found = false;

    cout << "Masukkan angka yang ingin dicari: ";
    cin >> x;

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            cout << "Data ditemukan pada indeks ke-" << i << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Data tidak ditemukan" << endl;
    }

    return 0;
}   