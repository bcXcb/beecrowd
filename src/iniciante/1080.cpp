#include <iostream>
 
using namespace std;
 
int main() {
    int x;
    int pos;
    int bigger;
    
    cin >> x;
    bigger = x;
    pos = 1;
    
    for (int i = 2; i <= 100; i++) {
        cin >> x;
        if (x > bigger) {
            bigger = x;
            pos = i;
        }
    }
    
    cout << bigger << endl;
    cout << pos << endl;
 
    return 0;
}
