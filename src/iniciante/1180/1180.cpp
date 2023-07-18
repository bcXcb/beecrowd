#include <iostream>
 
using namespace std;
 
int main() {
    int m;
    int n;
    int o;
    
    cin >> n;
    
    int x[n];
    
    cin >> x[0];
    m = x[0];
    
    for (int i = 1; i < n; i++) {
        cin >> x[i];
        
        if (x[i] < m) {
            m = x[i];
            o = i;
        }
    }
    
    cout << "Menor valor: " << m << endl;
    cout << "Posicao: " << o << endl;
 
    return 0;
}
