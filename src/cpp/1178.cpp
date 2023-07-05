#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    double n;
    double v[100];
    
    cin >> n;
    
    v[0] = n;
    
    for (int i = 1; i < 100; i++) {
        v[i] = v[i - 1] / 2.0000;
    }
    
    cout << fixed << setprecision(4);
    for (int i = 0; i < 100; i++) {
        cout << "N[" << i << "] = " << v[i] << endl;
    }
 
    return 0;
}
