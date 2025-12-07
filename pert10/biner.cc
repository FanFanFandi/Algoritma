#include <iostream>
using namespace std;

int main() {
    string biner;
    cout << "Masukkan bilangan biner: ";
    cin >> biner;

    int desimal = 0;
    for (char c : biner) {
        desimal = desimal * 2 + (c - '0');
    }

    cout << "Bilangan desimal dari " << biner << " adalah: " << desimal << endl;
    return 0;
}
