#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        (i < n - 1) ? cout << "Ho " : cout << "Ho!" << endl;
    }
 
    return 0;
}
