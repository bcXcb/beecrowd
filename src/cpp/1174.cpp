#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    const int SIZE = 100;
    double a[SIZE];
    
    for (int i = 0; i < SIZE; i++) {
        cin >> a[i];
    }
 
    cout << fixed << setprecision(1);
 
    for (int i = 0; i < SIZE; i++) {
        if (a[i] <= 10.0) {
            cout << "A[" << i << "] = " << a[i] << endl;
        }
    }
 
    return 0;
}
