#include <iostream>
 
using namespace std;
 
int main() {
    double nota, maiorNota;
    int casosTeste, matricula, matriculaSelecionada;
    
    cin >> casosTeste;
    
    cin >> matricula >> nota;
    maiorNota = nota;
    matriculaSelecionada = matricula;
    
    for (int i = 1; i < casosTeste; i++) {
        cin >> matricula >> nota;
        
        if (nota > maiorNota) {
            maiorNota = nota;
            matriculaSelecionada = matricula;
        }
    }
    
    if (maiorNota < 8.0) {
        cout << "Minimum note not reached" << endl;
    } else {
        cout << matriculaSelecionada << endl;
    }
 
    return 0;
}