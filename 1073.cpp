#include <iostream>

using namespace std;

int main() {
    int n;
    int square;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            square = i * i;
            cout << i << "^" << "2" << " = " << square << endl;
        }
    }

    return 0;
}
