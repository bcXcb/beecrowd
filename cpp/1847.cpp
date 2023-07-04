#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    string feliz = ":)";
    string triste = ":(";

    cin >> a >> b >> c;

    if (a > b and c >= b) {
        cout << feliz << endl;
    }

    if (a < b and c <= b) {
        cout << triste << endl;
    }

    if (a < b and b < c) {
        if ((c - b) < (b - a)) {
            cout << triste << endl;
        } else {
            cout << feliz << endl;
        }
    }

    if (a > b and b > c) {
        if ((b - c) < (a - b)) {
            cout << feliz << endl;
        } else {
            cout << triste << endl;
        }
    }

    if (a == b) {
        if (b < c) {
            cout << feliz << endl;
        } else {
            cout << triste << endl;
        }
    }

    return 0;
}