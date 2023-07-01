#include <iostream>
 
using namespace std;
 
int main() {
    int x;
    int y;
    
    do {
        cin >> x >> y;
        
        if (x > y) {
            cout << "Decrescente" << endl;
        }
        if (x < y) {
            cout << "Crescente" << endl;
        }
    } while (x != y);
 
    return 0;
}
