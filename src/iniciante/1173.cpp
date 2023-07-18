#include <iostream>
 
using namespace std;
 
int main() {
    int v;
    int n[10];
    
    cin >> v;
    
    for (int i = 0; i < 10; i++) {
        n[i] = v;
        v *= 2;
    }
    
    for (int i = 0; i < 10; i++) {
        cout << "N[" << i << "] = " << n[i] << endl;
    }
 
    return 0;
}
