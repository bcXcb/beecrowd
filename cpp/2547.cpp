#include <iostream>
 
using namespace std;
 
int main() {
    int total, altura, alturaMinima, alturaMaxima, quantasPoderao;

    while (cin.good()) {
        quantasPoderao = 0;
        
        cin >> total >> alturaMinima >> alturaMaxima;

        if (cin.good()) {
            for (int i = 0; i < total; i++) {
                cin >> altura;
                
                if (altura >= alturaMinima and altura <= alturaMaxima) {
                    quantasPoderao++;
                }
            }
            
            cout << quantasPoderao << endl;
        }
    }
 
    return 0;
}