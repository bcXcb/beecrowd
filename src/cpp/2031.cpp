#include <iostream>
 
using namespace std;
 
int main() {
    int casosTeste;
    string escolhaA, escolhaB;
    
    cin >> casosTeste;
    
    for (int i = 0; i < casosTeste; i++) {
        cin >> escolhaA;
        cin >> escolhaB;
        
        if ((escolhaA == "ataque" and (escolhaB == "pedra" or escolhaB == "papel")) or
            (escolhaA == "pedra" and escolhaB == "papel")) {
            cout << "Jogador 1 venceu" << endl;
        } 
        
        if ((escolhaB == "ataque" and (escolhaA == "pedra" or escolhaA == "papel")) or
            (escolhaB == "pedra" and escolhaA == "papel")) {
            cout << "Jogador 2 venceu" << endl;
        }

        if (escolhaA == "papel" and escolhaA == escolhaB) {
            cout << "Ambos venceram" << endl;
        }

        if (escolhaA == "pedra" and escolhaA == escolhaB) {
            cout << "Sem ganhador" << endl;
        }

        if (escolhaA == "ataque" and escolhaA == escolhaB) {
            cout << "Aniquilacao mutua" << endl;
        }
    }
 
    return 0;
}