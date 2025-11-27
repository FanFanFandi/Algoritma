#include <iostream>
using namespace std;

#define MAX 10   

struct Customer {
    int nomor;
    int waktu;
};

struct Queue {
    Customer data[MAX];
    int front;
    int rear;
    int count;
};

void init(Queue &q) {
    q.front = 0;
    q.rear = -1;
    q.count = 0;
}

bool isFull(Queue q) {
    return q.count == MAX;
}

bool isEmpty(Queue q) {
    return q.count == 0;
}

void enqueue(Queue &q, int nomor, int waktu) {
    if (isFull(q)) {
        cout << "Queue penuh! Tidak bisa enqueue." << endl;
        return;
    }

    q.rear = (q.rear + 1) % MAX;
    q.data[q.rear].nomor = nomor;
    q.data[q.rear].waktu = waktu;
    q.count++;

    cout << "Enqueue: Pelanggan " << nomor 
         << " berhasil ditambahkan." << endl;
}

void dequeue(Queue &q) {
    if (isEmpty(q)) {
        cout << "Queue kosong! Tidak bisa dequeue." << endl;
        return;
    }

    Customer c = q.data[q.front];
    q.front = (q.front + 1) % MAX;
    q.count--;

    cout << "Dequeue: Pelanggan " << c.nomor
         << " dilayani (" << c.waktu << " detik)." << endl;
}

void display(Queue q) {
    if (isEmpty(q)) {
        cout << "Queue kosong!" << endl;
        return;
    }

    cout << "Isi Queue:" << endl;

    int idx = q.front;
    for (int i = 0; i < q.count; i++) {
        cout << "- No." << q.data[idx].nomor
             << ", Waktu: " << q.data[idx].waktu << " detik" << endl;

        idx = (idx + 1) % MAX;
    }
}

int jumlah(Queue q) {
    return q.count;
}

int main() {
    Queue q;
    init(q);

    int pilihan;
    int nomor = 1;

    do {
        cout << "\n=== PROGRAM ANTRIAN KASIR ===\n";
        cout << "1. Tambah pelanggan\n";
        cout << "2. Layani pelanggan\n";
        cout << "3. Tampilkan antrian\n";
        cout << "4. Jumlah pelanggan\n";
        cout << "5. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                int waktu;
                cout << "Masukkan waktu pelayanan (detik): ";
                cin >> waktu;
                enqueue(q, nomor, waktu);
                nomor++;
                break;
            }
            case 2:
                dequeue(q);
                break;
            case 3:
                display(q);
                break;
            case 4:
                cout << "Jumlah pelanggan: " << jumlah(q) << endl;
                break;
            case 5:
                cout << "Program selesai. Terima kasih." << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }

    } while (pilihan != 5);

    return 0;
}
