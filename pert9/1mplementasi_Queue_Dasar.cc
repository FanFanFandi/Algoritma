#include <iostream>
using namespace std;

#define MAX 10

struct Queue {
    int data[MAX];
    int front;
    int rear;
    int count;
} q;

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

void enqueue(Queue &q, int value) {
    if (isFull(q)) {
        cout << "Queue penuh! Tidak bisa enqueue.\n";
        return;
    }

    q.rear++;
    q.data[q.rear] = value;
    q.count++;

    cout << "Enqueue: " << value << " berhasil ditambahkan.\n";
}

void dequeue(Queue &q) {
    if (isEmpty(q)) {
        cout << "Queue kosong! Tidak bisa dequeue.\n";
        return;
    }

    int removed = q.data[q.front];
    cout << "Dequeue: " << removed << " berhasil dihapus.\n";

    for (int i = 0; i < q.rear; i++) {
        q.data[i] = q.data[i + 1];
    }

    q.rear--;
    q.count--;
}

void display(Queue q) {
    if (isEmpty(q)) {
        cout << "Queue kosong!\n";
        return;
    }

    cout << "Isi Queue: ";
    for (int i = 0; i <= q.rear; i++) {
        cout << q.data[i] << " ";
    }
    cout << endl;
}

int main() {
    int pilihan, nilai;
    init(q);

    do {
        cout << "\n=== MENU QUEUE ===\n";
        cout << "1. Enqueue (Tambah Data)\n";
        cout << "2. Dequeue (Hapus Data)\n";
        cout << "3. Tampilkan Queue\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan nilai: ";
                cin >> nilai;
                enqueue(q, nilai);
                break;

            case 2:
                dequeue(q);
                break;

            case 3:
                display(q);
                break;

            case 4:
                cout << "Program selesai.\n";
                break;

            default:
                cout << "Pilihan tidak valid!\n";
        }

    } while (pilihan != 4);

    return 0;
}