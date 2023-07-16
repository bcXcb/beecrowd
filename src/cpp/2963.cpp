#include <iostream>

using namespace std;
 
int main() {
    bool e = true;
    int n, v, a;
    
    cin >> n;
    cin >> a;
    n--;
    
    while (n--) {
        cin >> v;
        if (a < v) { e = false; }
    }
    
    if (e) { cout.put('S') << endl; }
    else { cout.put('N') << endl; }
 
    return 0;
}