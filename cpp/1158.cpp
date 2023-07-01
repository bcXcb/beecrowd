#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    int x;
    int y;
    int t;
    int sum;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        t = 0;
        sum = 0;
        cin >> x >> y;
        
        while (t < y) {
            if (x % 2 != 0) {
                t++;
                sum += x;
            }
            x++;
        }
        
        cout << sum << endl;
    }
 
    return 0;
}
