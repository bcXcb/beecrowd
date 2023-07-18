#include <iostream>
 
using namespace std;
 
int main() {
    int n, m, t;
    
    do {
        cin >> n >> m;
        t = m - n; // 12
        
        if (n != 0 and m != 0) {
            if (t < 5) {
                t -= 2;
                t -= 2;
            } else if (t < 10) {
                t-= 5;
                t -= 2;
            } else if (t < 20) {
                int valores[] = {2, 5};
                
                t -= 10;
                
                for (int i = 0; i < 2; i++) {
                    if (t - valores[i] == 0) {
                        t -= valores[i];
                        break;
                    }
                }
            } else if (t < 50) {
                int valores[] = {2, 5, 10};
                
                t -= 20;
                
                for (int i = 0; i < 3; i++) {
                    if (t - valores[i] == 0) {
                        t -= valores[i];
                        break;
                    }
                }
            } else if (t < 100) {
                int valores[] = {2, 5, 10, 20};
                
                t -= 50;
                
                for (int i = 0; i < 4; i++) {
                    if (t - valores[i] == 0) {
                        t -= valores[i];
                        break;
                    }
                }
            } else { // t == 100
                int valores[] = {2, 5, 10, 20, 50};
                
                t -= 100;
                
                for (int i = 0; i < 5; i++) {
                    if (t - valores[i] == 0) {
                        t -= valores[i];
                        break;
                    }
                }
            }
            
            (t == 0) ? cout << "possible" << endl : cout << "impossible" << endl;
        }
    } while (n != 0 and m != 0);
 
    return 0;
}