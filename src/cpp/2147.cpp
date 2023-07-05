#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    int c;
    double t;
    string word;
 
    cin >> c;
    
    cout << fixed << setprecision(2);
    for (int i = 0; i < c; i++) {
        cin >> word;
        
        t = (double) word.size() / 100;
        
        cout << t << endl;
    }
 
    return 0;
}