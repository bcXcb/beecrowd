#include <iostream>

using namespace std;

int main() {
    int n;
    
    while(cin.good()) {
        cin >> n;
        
        if (cin.good()) {
            n--;
            cout << n << endl;
        }
    }
}
