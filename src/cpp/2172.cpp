#include <iostream>
 
using namespace std;
 
int main() {
    int n, x, m, e;
    
    do {
        e = 0;
        
        cin >> x >> m;
        
        if (x != 0 and m != 0) {
            e = x * m;
            cout << e << endl;
        }
        
    } while (x != 0 and m != 0);
    
    return 0;
}
