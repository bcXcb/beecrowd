#include <iostream>
 
using namespace std;
 
int main() {
    int x;
    
    do {
        cin >> x;
        
        if (x != 0) {
            for (int i = 1; i <= x; i++) {
                if (i != x) {
                    cout << i << " ";
                } else {
                    cout << i << endl;
                }
            }
        }
    } while (x != 0);
 
    return 0;
}
