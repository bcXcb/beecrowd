#include <iostream>

using namespace std;

int main() {
    int x;
    int y;
    int aux;
    int sum = 0;

    cin >> x >> y;

    if (x > y) {
        aux = x;
        x = y;
        y = aux;
    }

    for (int i = x + 1; i < y; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}
