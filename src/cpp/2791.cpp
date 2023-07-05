#include <iostream>
 
using namespace std;
 
int main() {
    int p;
    int c[4];
    
    cin >> c[0] >> c[1] >> c[2] >> c[3];
    
    for (int i = 0; i < 4; i++) {
        if (c[i] ==  1) {
            p = i + 1;
            break;
        }
    }
    
    cout << p << endl;
 
    return 0;
}
