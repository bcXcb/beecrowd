#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    
    cin >> n;
    
    if (n == 0) {
        cout.put('E') << endl;
    } else if (n <= 35) {
        cout.put('D') << endl;
    } else if (n <= 60) {
        cout.put('C') << endl;
    } else if (n <= 85) {
        cout.put('B') << endl;
    } else {
        cout.put('A') << endl;
    }
 
    return 0;
}
