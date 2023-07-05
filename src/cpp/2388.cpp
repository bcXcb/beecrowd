#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    int x;
    int y;
    int accumulator = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        accumulator += x * y;
    }
    
    cout << accumulator << endl;
 
    return 0;
}
