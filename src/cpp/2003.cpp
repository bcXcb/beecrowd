#include <iostream>
 
using namespace std;
 
int main() {
    int h, m, a;
    char buffer;

    while(cin.good()) {
        cin >> h >> buffer >> m;
        
        if (cin.good()) {
            if (h > 7) {
                a = ((h - 7) * 60) + m;
            } else if (h < 7) {
                a = 0;
            } else {
                a = (m == 0) ? 0 : m;
            }

            cout << "Atraso maximo: " << a << endl;
        }
    }

    return 0;
}