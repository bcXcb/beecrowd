#include <iostream>
 
using namespace std;
 
int main() {
    string t;
    
    getline(cin, t);
    
    (t.length() <= 80) ? cout << "YES" << endl : cout << "NO" << endl;
 
    return 0;
}