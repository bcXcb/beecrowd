#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    int m;
    int f;
    string action;
    
    cin >> n >> m;
    f = n;
    
    for (int i = 0; i <= m; i++) {
        getline(cin, action);
        
        if (action == "fechou")
            f++;
        
        if (action == "clicou")
            f--;
    }
 
    cout << f << endl;
 
    return 0;
}
