#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    int a;
    int b;
    double s;
    
    s = a = b = 1;
    
    while (a <= 39) {
        a += 2;
        b *= 2;
        s = s + (double) a / b;
    }
    
    cout << fixed << setprecision(2);
    cout << s << endl;
 
    return 0;
}
