#include <iostream>
 
using namespace std;
 
int main() {
    int x;
    int y;
    
    do {
        cin >> x >> y;
        
        if (x != 0 and y != 0) {
            if (x > 0 and y > 0) {
                cout << "primeiro" << endl;
            } else if (x < 0 and y < 0) {
                cout << "terceiro" << endl;
            } else if (x > 0 and y < 0) {
                cout << "quarto" << endl;
            } else {
                cout << "segundo" << endl;
            }
        }
    } while (x != 0 and y != 0);
 
    return 0;
}
