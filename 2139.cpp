#include <iostream>
 
using namespace std;

int main() {
    int m, d, f;
    int meses[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    while (cin.good()) {
        cin >> m >> d;
        
        if (cin.good()) {
            if (m < 12) {
                f = meses[m - 1] - d;

                for (int i = m; i < 11; i++) {
                    f += meses[i];
                }
                
                f += 25;

                cout << "Faltam " << f << " dias para o natal!" << endl;
            }

            if (m == 12) {
                if (d > 25) {
                    cout << "Ja passou!" << endl;
                } else if (d < 25) {
                    f = 25 - d;
                    if (f == 1) {
                        cout << "E vespera de natal!" << endl;
                    } else {
                        cout << "Faltam " << f << " dias para o natal!" << endl;
                    }
                } else {
                    cout << "E natal!" << endl;
                }
            }
        }
    }
 
    return 0;
}