#include <iostream>
 
using namespace std;
 
int main() {
    string a, w, x, y, z;
    
    cin >> w;
    
    x = y = z = w;
    
    // x
    a[0] = x[0];
    a[1] = x[1];
    x[0] = x[3];
    x[1] = x[4];
    x[3] = a[0];
    x[4] = a[1];

    // y
    a[0] = y[0];
    a[1] = y[1];
    y[0] = y[6];
    y[1] = y[7];
    y[6] = a[0];
    y[7] = a[1];

    // z
    z[2] = z[5] = '-';
    
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
 
    return 0;
}