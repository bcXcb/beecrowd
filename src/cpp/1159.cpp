#include <iostream>
 
using namespace std;
 
int main() {
    int x;
    int y;
    int z;
    
    do {
        cin >> x;
        y = 0;
        z = 0;
        
        if (x != 0) {
            while (z < 5) {
                if (x % 2 == 0) {
                    y += x;
                    z++;
                }
                x++;
            }
            cout << y << endl;
        }
        
        
    } while (x != 0);
 
    return 0;
}
