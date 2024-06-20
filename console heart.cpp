﻿#include <iostream>
#include <windows.h>

using namespace std;

void setConsoleColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

int main() {
    int n = 6;
    int size = n * 2;

    setConsoleColor(5);

    for (int i = n / 2; i <= n; i += 2) {
        for (int j = 1; j < n - i; j += 2) {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = n; i >= 1; i--) {
        for (int j = i; j < n; j++) {
            cout << " ";
        }

        for (int j = 1; j <= (i * 2) - 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    setConsoleColor(7);

    return 0;
}
