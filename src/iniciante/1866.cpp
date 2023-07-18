#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    int t;
    int s;
    int x;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        s = 0;
        x = 1;
        cin >> t;
        
        for (int j = 0; j < t; j++) {
            s += x;
            x *= -1;
        }
        
        cout << s << endl;
    }
    
 
    return 0;
}
