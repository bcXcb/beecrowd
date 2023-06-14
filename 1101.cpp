#include <iostream>
 
using namespace std;
 
int main() {
    int m;
    int n;
    int sum;
    
    do {
        sum = 0;
        
        cin >> m >> n;
        
        if (m > 0 && n > 0) {
            // swap
            if (m > n) {
                m = m + n;
                n = m - n;
                m = m - n;
            }
            
            for (int i = m; i <= n; i++) {
                sum += i;
                cout << i << " ";
            }
            
            cout << "Sum=" << sum << endl;
        }
    } while (m > 0 && n > 0);
 
    return 0;
}
