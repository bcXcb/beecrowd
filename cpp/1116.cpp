#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    int n;
    double x;
    double y;
    double d;
    
    cin >> n;
    
    cout << fixed << setprecision(1);
    
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        
        if (y == 0) {
            cout << "divisao impossivel" << endl;
        } else {
            d = x / y;
            cout << d << endl;
        }
    }
 
    return 0;
}
