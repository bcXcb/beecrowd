#include <iostream>
 
using namespace std;
 
int main() {
    int v[2];
    
    cin >> v[0] >> v[1];
    
    if (v[0] > v[1]) {
        v[0] += v[1];
        v[1] = v[0] - v[1];
        v[0] -= v[1];
    }
    
    cout << v[1] << endl;
 
    return 0;
}
