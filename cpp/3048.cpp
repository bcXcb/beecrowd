#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    int t1 = 0;
    int t2 = 0;
    int k;
    
    cin >> n;
    
    int v[n];
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    k = 1;
    for (int i = 0; i < n; i++) {
        if (k != v[i]) {
            k = v[i];
            t1++;
        }
    }
    
    k = 2;
    for (int i = 0; i < n; i++) {
        if (k != v[i]) {
            k = v[i];
            t2++;
        }
    }
    
    if (t1 > t2) {
        cout << t1 << endl;
    } else {
        cout << t2 << endl;
    }
 
    return 0;
}
