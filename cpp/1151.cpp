#include <iostream>

using namespace std;

int main() {
    int n;
    int a = 0;
    int b = 1;
    int c = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        (i < n - 1) ? cout << c << " " : cout << c << endl;
        a = b;
        b = c;
        c = a + b;
    }

    return 0;
}
