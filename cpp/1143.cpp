#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    int x;
    
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        x = i;
        for (int j = 0; j < 3; j++) {
            if (j < 2) {
                cout << x << " ";
            } else {
                cout << x << endl;
            }
            x *= i;
        }
        
    }
 
    return 0;
}
