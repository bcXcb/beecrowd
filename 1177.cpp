#include <iostream>
 
using namespace std;
 
int main() {
    int t;
    int k = 0;
    int v[1000];
    
    cin >> t;
    
    for (int i = 0; i < 1000; i++) {
        v[i] = k++;
        if (k == t) {
            k = 0;
        }
    }
    
    for (int i = 0; i < 1000; i++) {
        cout << "N[" << i << "] = " << v[i] << endl;
    }
 
    return 0;
}
