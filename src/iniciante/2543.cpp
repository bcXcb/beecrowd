#include <iostream>
 
using namespace std;
 
int main() {
    int n, id, l, m, total;
    
    while(cin.good()) {
        total = 0;
        cin >> n >> id;
        
        if (cin.good()) {
            for (int i = 0; i < n; i++) {
                cin >> l >> m;
                
                if (l == id and m == 0) {
                    total++;
                }
            }
            
            cout << total << endl;
        }
    }
 
    return 0;
}
