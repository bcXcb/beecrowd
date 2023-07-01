#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    
    while (!cin.eof()) {
        cin >> n;
        
        if (cin.good()) {
            if (n == 0) {
                cout << "vai ter copa!" << endl;
            } else {
                cout << "vai ter duas!" << endl;
            }
        }
    }
 
    return 0;
}
