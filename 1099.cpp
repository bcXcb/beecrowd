#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    int x;
    int y;
    int sum;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        sum = 0;
        cin >> x >> y;
        
        if (x > y) {
            x = x + y;
            y = x - y;
            x = x - y;
        }
        
        for (int i = x + 1; i < y; i++) {
            if (i % 2 != 0) {
                sum += i;
            }
            
        }
        
        cout << sum << endl;
    }
    
 
    return 0;
}
