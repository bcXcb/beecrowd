#include <iostream>
 
using namespace std;
 
int main() {
    int x;
    double z;
    double t = 0;
    double y = 0.2;
    int a = 1;
    int h = 1;
    double b = 0.2;
    int k = 1;
    int m = 1;
    double n = 0.2;
    int s = 1;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 1; j < 16; j++) {
            if (a < 4) {
                z = h;
            } else {
                z = h + b;
                t = i + b;
                k++;
            }
            if (k == 4) {
                k = 1;
                b += 0.2;
            }
            if (i != 0) {
                t = i + y;
                z = h + 1 + y;
            }
            if (i >= 1) {
                t = i;
                z = h + 1;
                m++;
            }
            if (m > 4) {
                t = i + n;
                z = h + 1 + n;
                s++;
            }
            if (s > 3) {
                s = 1;
                n += 0.2;
            }
            if (t >= 3) {
                t -= 1;
            }
            cout << "I=" << t << " " << "J=" << z << endl;
            if (t == 2 && z == 5) {
                break;
            }
            a++;
            h++;
            if (h == 4) {
                h = 1;
            }
        }
        b += 0.2;
    }
 
    return 0;
}
