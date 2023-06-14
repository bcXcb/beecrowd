#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    int r[2];
    int t;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> r[0] >> r[1];
        t = r[0] + r[1];
        cout << t << endl;
    }
 
    return 0;
}
