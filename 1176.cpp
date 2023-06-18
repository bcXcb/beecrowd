#include <iostream>
#include <cstdlib>
 
using namespace std;
 
int main() {
    int n;
    uint64_t a = 0;
    uint64_t b = 1;
    uint64_t c = 0;
    int x;
    const int SIZE = 101;
    uint64_t v[SIZE];
    
    cin >> n;
    
    // fill the array
    for (int i = 0; i < SIZE; i++) {
        v[i] = c;
        a = b;
        b = c;
        c = a + b;
    }
    
    for (int i = 0; i < n; i++) {
        cin >> x;
        cout << "Fib(" << x << ") = " << v[x] << endl;
    }
 
    return 0;
}
