#include <iostream>
 
using namespace std;
 
int main() {
    int v;
    int m = 1;
    int a[4];
    int x;
    int b[] = {50, 10, 5, 1};
    
    do {
        cin >> v;
        
        x = v;
        
        if (v != 0) {
            for (int i = 0; i < 4; i++) {
                a[i] = x / b[i];
                x -= (a[i] * b[i]);
            }
            
            cout << "Teste " << m++ << endl;
            cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << endl;
            cout << endl;
        }
    } while (v != 0);
 
    return 0;
}
