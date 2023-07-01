#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    int k;
    int door[3] = {0};
    int hit = 0;
    
    srand(time(NULL));
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> k;
        
        door[--k] = 1;
        
        if (k != 0) {
            hit++;
        }
        
        door[k] = 0;
    }
    
    cout << hit << endl;
 
    return 0;
}
