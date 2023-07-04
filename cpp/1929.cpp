#include <iostream>
 
using namespace std;
 
int main() {
    int a, b, c, d;
    bool situacao1, situacao2, situacao3, situacao4;
    
    cin >> a >> b >> c >> d;
    
    situacao1 = (((a < (b + c)) and (a > abs(b - c))) or ((a < (b + d)) and (a > abs(b - d))) or ((a < (c + d)) and (a > abs(c - d))));
    situacao2 = (((b < (a + c)) and (b > abs(a - c))) or ((b < (a + d)) and (b > abs(a - d))) or ((b < (c + d)) and (b > abs(c - d))));
    situacao3 = (((c < (a + b)) and (c > abs(a - b))) or ((c < (a + d)) and (c > abs(a - d))) or ((c < (b + d)) and (c > abs(b - d))));
    situacao4 = (((d < (a + b)) and (d > abs(a - b))) or ((d < (a + c)) and (d > abs(a - c))) or ((d < (b + c)) and (d > abs(b - c))));
    
    if (situacao1 or situacao2 or situacao3 or situacao4) {
        cout.put('S') << endl;
    } else {
        cout.put('N') << endl;
    }
 
    return 0;
}