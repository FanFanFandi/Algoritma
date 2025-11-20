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
        return '\0'; 
    }
    return stackArr[top--];
}

bool isEmpty() {
    return (top == -1);
}

bool isMatching(char buka, char tutup) {
    return  (buka == '(' && tutup == ')') ||
            (buka == '{' && tutup == '}') ||
            (buka == '[' && tutup == ']');
}

int main() {
    string ekspresi;
    cout << "Masukkan ekspresi: ";
    getline(cin, ekspresi);

    for (int i = 0; i < ekspresi.length(); i++) {
        char ch = ekspresi[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            char topChar = pop();

            if (!isMatching(topChar, ch)) {
                cout << "Tidak Valid" << endl;
                return 0;
            }
        }
    }

    if (!isEmpty()) {
        cout << "Tidak Valid" << endl;
    } else {
        cout << "Valid" << endl;
    }

    return 0;
}