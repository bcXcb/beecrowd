#include <iostream>
 
using namespace std;
 
int main() {
    int d;
    int a;
    int l;
    int p;
    
    cin >> d;
    cin >> a >> l >> p;
    
    if (a >= d and l >= d and p >= d) {
        cout.put('S') << endl;
    } else {
        cout.put('N') << endl;
    }
 
    return 0;
}
