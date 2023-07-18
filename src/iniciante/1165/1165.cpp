#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    int x;
    bool isPrime;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        isPrime = true;
        cin >> x;
        
        for (int j = 2; j < x; j++) {
            if (x % j == 0) {
                isPrime = false;
                break;
            }
        }
        
        if (isPrime) {
            cout << x << " eh primo" << endl;
        } else {
            cout << x << " nao eh primo" << endl;
        }
    }
 
    return 0;
}
