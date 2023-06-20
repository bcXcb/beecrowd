#include <iostream>
 
using namespace std;
 
int main() {
    int m;
    int f;
    int g;
    int h;
    int b;
    
    cin >> m;
    cin >> f;
    cin >> g;
    
    h = m - f - g;
    
    if (f > g and f > h) {
        b = f;
    }
    if (g > f and g > h) {
        b = g;
    }
    if (h > f and h > g) {
        b = h;
    }
    
    cout << b << endl;
 
    return 0;
}
