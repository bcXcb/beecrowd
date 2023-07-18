#include <iostream>
 
using namespace std; 

int main() {
    int n, m, a;
    
    cin >> n;
    
    cin >> a;
    m = a;
    
    while (--n) {
        cin >> a;
        if (a > m) { m = a; }
    }
    
    cout << m + 1 << endl;
 
    return 0;
}