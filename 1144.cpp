#include <iostream>
 
using namespace std;
 
int main() {
    int a;
    int m = 1;
    int n = 1;
    int x = 0;
    int y = 2;
    int k = 1;
    
    cin >> a;
    
    for (int i = 1; i <= a; i++) {
        for (int j = 0; j < 2; j++) {
            cout << i << " " << m << " " << n << endl;
            
            if (k++ % 2 != 0) {
                m++;
                n++;
            } else {
                m += (x += 2);
                n = y++ * m;
            }
        }
    }

    return 0;
}
