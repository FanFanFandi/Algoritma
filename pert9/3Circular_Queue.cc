#include <iostream>
using namespace std;

#define MAX 5   

struct Queue {
    int data[MAX];
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

void insert(Queue &q, int value) {
    if (isFull(q)) {
        cout << "Queue penuh! Tidak bisa insert.\n";
        return;
    }
    q.rear = (q.rear + 1) % MAX;
    q.data[q.rear] = value;
    q.count++;
}

int remove(Queue &q) {
    if (isEmpty(q)) {
        cout << "Queue kosong! Tidak bisa remove.\n";
        return -1;
    }
    int value = q.data[q.front];
    q.front = (q.front + 1) % MAX;
    q.count--;
    return value;
}

void display(Queue q) {
    if (isEmpty(q)) {
        cout << "Queue kosong!\n";
        return;
    }

    cout << "Isi Queue: ";
    int idx = q.front;

    for (int i = 0; i < q.count; i++) {
        cout << q.data[idx] << " ";
        idx = (idx + 1) % MAX;
    }
    cout << endl;
}

int main() {
    Queue q;
    init(q);

    cout << "Mengisi queue hingga penuh...\n";
    insert(q, 10);
    insert(q, 20);
    insert(q, 30);
    insert(q, 40);
    insert(q, 50);
    display(q);

    cout << "\nMenghapus 3 elemen...\n";
    cout << "Remove: " << remove(q) << endl;
    cout << "Remove: " << remove(q) << endl;
    cout << "Remove: " << remove(q) << endl;
    display(q);

    cout << "\nMenambah 2 elemen baru...\n";
    insert(q, 60);
    insert(q, 70);
    display(q);

    cout << "\nposisi front = " << q.front << endl;
    cout << "posisi rear  = " << q.rear << endl;

    cout << "\nIsi queue akhir:\n";
    display(q);

    return 0;
}
