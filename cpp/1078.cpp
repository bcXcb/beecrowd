#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    int result;
    
    cin >> n;
    
    for (int i = 1; i <= 10; i++) {
        result = n * i;
        cout << i << " x " << n << " = " << result << endl;
    }
 
    return 0;
}
