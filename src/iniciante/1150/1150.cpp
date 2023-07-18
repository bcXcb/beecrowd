#include <iostream>
 
using namespace std;
 
int main() {
    int x;
    int z;
    int t = 0;
    int sum = 0;
    
    cin >> x;
    
    do {
        cin >> z;
    } while (z <= x);
    
    for (int i = 0; ; i++) {
        sum += x++;
        t++;
        
        if (sum > z) {
            break;
        }
    }
    
    cout << t << endl;
 
    return 0;
}
