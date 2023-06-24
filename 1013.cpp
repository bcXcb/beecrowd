#include <iostream>
 
using namespace std;
 
int main() {
    int a, b, c, m;
    
    cin >> a >> b >> c;
    
    m = ((a + b) + abs(a - b)) / 2;
    m = ((m + c) + abs(m - c)) / 2;
    
    cout << m << " eh o maior" << endl;
 
    return 0;
}
