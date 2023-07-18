#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, x;
    string strx;

    while (cin >> strx >> n) {
        string stry;

        for (int i = 0; i < n; i++) {
            cin >> x;
            stry += strx[x - 1];
        }

        cout << stry << endl;
    }

    return 0;
}