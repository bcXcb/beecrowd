#include <iostream>
 
using namespace std;
 
int main() {
    unsigned long long p = 0;
    unsigned long long flag = p - 1;

    do {
        cin >> p;
        
        if (p != flag) {
            if (p == 0) { cout.put('0') << endl; }
            else { cout << p - 1 << endl; };
        }
    } while (p != flag);
 
    return 0;
}