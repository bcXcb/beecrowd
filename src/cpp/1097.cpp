#include <iostream>
 
using namespace std;
 
int main() {
    int x = 7;
    
    for (int i = 1; i < 10; i += 2) {
        for (int j = x; j >= (x - 2); j--) {
            cout << "I=" << i << " " << "J=" << j << endl;
        }
        x = x + 2;
    }
 
    return 0;
}
