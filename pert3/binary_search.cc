#include <iostream>
using namespace std;

int main() {
    int arr[7] = {1, 3, 5, 7, 9, 11, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    
    cout << "Masukkan angka yang ingin dicari: ";
    cin >> x;

    int low = 0, high = n - 1;
    bool found = false;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == x) {
            cout << "asik data ditemukan pada indeks ke-" << mid << endl;
            break;
        }
        else if (arr[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (!found) {
        cout << "NT bray data tidak ditemukan" << endl;
    }

    return 0;
}
