#include <iostream>
using namespace std;

int main() {
    int angka;
    bool genap;
    
    cout << "Masukan angka: ";
    cin >> angka;

    genap = (angka % 2 == 0);
    cout << "Apakah genap? "<< boolalpha << genap << endl;

    return 0;
}