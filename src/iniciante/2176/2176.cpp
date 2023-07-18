#include <iostream>
 
using namespace std;
 
int main() {
    string m;
    string s;
    int t = 0;
    
    getline(cin, m);
    
    for (int i = 0; i < m.length(); i++) {
        if (m[i] == '1') {
            t++;
        }
    }
    
    s = (t % 2 == 0) ? m + '0' : m + '1';
    
    cout << s << endl;
 
    return 0;
}
