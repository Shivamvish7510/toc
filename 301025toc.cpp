#include <iostream>
#include <string>
using namespace std;

string input;
int i = 0;

void x1();
void x2();
void x3();
void x4();

void x1() {
    if (i == input.size()) { cout << "ACCEPTED"; return; }
    char ch = input[i++];
    if (ch == 'a') x3();
    else if (ch == 'b') x2();
    else x1();
}

void x2() {
    if (i == input.size()) { cout << "REJECTED"; return; }
    char ch = input[i++];
    if (ch == 'a') x4();
    else if (ch == 'b') x1();
    else x2();
}

void x3() {
    if (i == input.size()) { cout << "REJECTED"; return; }
    char ch = input[i++];
    if (ch == 'a') x1();
    else if (ch == 'b') x4();
    else x3();
}

void x4() {
    if (i == input.size()) { cout << "REJECTED"; return; }
    char ch = input[i++];
    if (ch == 'a') x2();
    else if (ch == 'b') x3();
    else x4();
}

int main() {
    cout << "Enter string: ";
    cin >> input;
    x1();
    return 0;
}
