#include <iostream>
 
using namespace std;
 
int main() {
    int x;
    int y;
    int a;
    
    cin >> x >> y;
    
    for (int i = 1; i <= y; i += x) {
        a = i;
        for (int j = 1; j <= x; j++) {
            if (j < x) {
                cout << a << " ";
            } else {
                cout << a;
            }
            a++;
        }
        cout << endl;
    }
 
    return 0;
}
