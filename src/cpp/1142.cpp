#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    int x = 1;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cout << x++ << " ";
        }
        cout << "PUM" << endl;
        x++;
    }
 
    return 0;
}
