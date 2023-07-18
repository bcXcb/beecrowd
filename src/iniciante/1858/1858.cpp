#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    int m;
    int j;
    int t;
    
    cin >> n;
    
    cin >> t;
    m = t;
    j = 1;
    
    for (int i = 1; i < n; i++) {
        cin >> t;
        
        if (t < m) {
            m = t;
            j = i + 1;
        }
    }
    
    cout << j << endl;
 
    return 0;
}
