#include <iostream>
#include <string>
#define MAX_SIZE 1000

using namespace std;

char stackArr[MAX_SIZE];
int top = -1;
    
void push(char data) {
    if (top == MAX_SIZE - 1) {
        cout << "Stack overflow!\n";
        return;
    }
    stackArr[++top] = data;
}

char pop() {
    if (top == -1) {
        cout << "Stack underflow!\n";
        return '\0';
    }
    return stackArr[top--];
}

bool isEmpty() {
    return (top == -1);
}

int main() {
    string kalimat;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    for (int i = 0; i < kalimat.length(); i++) {
        push(kalimat[i]);
    }

    cout << "Kalimat terbalik: ";
    while (!isEmpty()) {
        cout << pop();
    }

    cout << endl;
    return 0;
}