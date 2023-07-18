#include <iostream>

using namespace std;

int main() {
    int x;
    int total = 0;

    cin >> x;

    while (total < 6) {
        if (x % 2 != 0) {
            cout << x << endl;
            total++;
        }
        x++;
    }

    return 0;
}
