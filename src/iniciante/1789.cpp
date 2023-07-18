#include <iostream>
 
using namespace std;
 
int main() {
    int totalLesmas;
    
    while (cin.good()) {
        cin >> totalLesmas;
        
        if (cin.good()) {
            int velocidade, maiorVelocidade;
            
            cin >> velocidade;
            maiorVelocidade = velocidade;
            
            for (int i = 1; i < totalLesmas; i++) {
                cin >> velocidade;
                
                if (velocidade > maiorVelocidade) {
                    maiorVelocidade = velocidade;
                }
            }
            
            if (maiorVelocidade < 10) {
                cout << 1 << endl;
            } else if (maiorVelocidade < 20) {
                cout << 2 << endl;
            } else {
                cout << 3 << endl;
            }
        }
    }
 
    return 0;
}