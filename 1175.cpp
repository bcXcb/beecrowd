#include <iostream>
 
using namespace std;
 
int main() {
    int p = 0;
    int q = 19;
    int n[20];
    
    for (int i = 0; i < 20; i++) {
        cin >> n[i];
    }
    
    for (int i = 0; i < 10; i++) {
        n[p] = n[p] + n[q];
        n[q] = n[p] - n[q];
        n[p] = n[p] - n[q];
        p++;
        q--;
    }
    
    for (int i = 0; i < 20; i++) {
        cout << "N[" << i << "] = " << n[i] << endl;
    }
 
    return 0;
}
