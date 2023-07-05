#include <iostream>

using namespace std;

int main() {
    int n;
    int c = 0;

    cin >>  n;
    
    if (n <= 10) {
        c += 7;
    } else if (n <= 30) {
        c += 7 + (n - 10);
    } else if (n <= 100) {
        c += 7 + 20;
        c += (n - 30) * 2;
    } else {
        c += 7 + 20 + 140;
        c += (n - 100) * 5;
    }

    cout << c << endl;

    return 0;
}