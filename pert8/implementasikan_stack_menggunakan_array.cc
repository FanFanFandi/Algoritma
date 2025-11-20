#include <iostream>
using namespace std;

int *stackArr; 
int topIndex = -1;
int kapasitas;  

void push(int data) {
    if (topIndex == kapasitas - 1) {
        cout << "Stack penuh! Tidak bisa menambah data.\n";
        return;
    }
    topIndex++;
    stackArr[topIndex] = data;
    cout << "Data " << data << " berhasil ditambahkan.\n";
}

int pop() {
    if (topIndex == -1) {
        cout << "Stack kosong! Tidak ada data yang bisa dihapus.\n";
        return -1;
    }
    int value = stackArr[topIndex];
    topIndex--;
    cout << "Data " << value << " berhasil dihapus.\n";
    return value;
}

int peek() {
    if (topIndex == -1) {
        cout << "Stack kosong.\n";
        return -1;
    }
    cout << "Elemen teratas: " << stackArr[topIndex] << endl;
    return stackArr[topIndex];
}

bool isEmpty() {
    return (topIndex == -1);
}

int size() {
    return topIndex + 1;
}

void display() {
    if (isEmpty()) {
        cout << "Stack kosong.\n";
        return;
    }

    cout << "Isi stack: ";
    for (int i = topIndex; i >= 0; i--) {
        cout << stackArr[i] << " ";
    }
    cout << endl;
}


int main() {
    cout << "Masukkan kapasitas maksimal stack: ";
    cin >> kapasitas;

    stackArr = new int[kapasitas]; 

    int pilihan, data;

    do {
        cout << "\n===== MENU STACK =====\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. IsEmpty\n";
        cout << "5. Size\n";
        cout << "6. Display\n";
        cout << "7. Exit\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan data: ";
                cin >> data;
                push(data);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                if (isEmpty()) cout << "Stack kosong.\n";
                else cout << "Stack tidak kosong.\n";
                break;

            case 5:
                cout << "Jumlah elemen dalam stack: " << size() << endl;
                break;

            case 6:
                display();
                break;

            case 7:
                cout << "Program selesai.\n";
                break;

            default:
                cout << "Pilihan tidak valid!\n";
        }

    } while (pilihan != 7);

    delete[] stackArr;
    return 0;
}