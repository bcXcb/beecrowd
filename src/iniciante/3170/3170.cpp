#include <iostream>
 
using namespace std;
 
int main() {
    int b, g, f;
        
    cin >> b;
    cin >> g;
    
    f = (g / 2) - b;
    
    if (f <= 0) {
        cout << "Amelia tem todas bolinhas!" << endl;
    } else {
        printf("Faltam %d bolinha(s)\n", f);
    }
 
    return 0;
}