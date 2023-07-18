#include <iostream>
 
using namespace std;
 
int main() {
    int t;
    int a[5];
    int total = 0;
    
    cin >> t;
    
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
    
    for (int i = 0; i < 5; i++) {
        if (a[i] == t) {
            total++;
        }
    }
    
    cout << total << endl;
 
    return 0;
}
