#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    string nome;
    int totalCompetidores;
    double maisAlta, maisBaixa, dificuldade, notas[7], notaFinal, total, resultadoFinal;
    
    cin >> totalCompetidores;
    
    cin >> nome;
    cin >> dificuldade;
    cin >> notas[0];
    total = maisAlta = maisBaixa = notas[0];

    for (int i = 1; i < 7; i++) {
        cin >> notas[i];
        total += notas[i];

        if (notas[i] < maisBaixa) {
            maisBaixa = notas[i];
        }

        if (notas[i] > maisAlta) {
            maisAlta = notas[i];
        }
    }
    
    notaFinal = total - maisAlta - maisBaixa;
    resultadoFinal = dificuldade * notaFinal;

    cout << fixed << setprecision(2);
    cout << nome << " " << resultadoFinal << endl;
    
    for (int i = 1; i < totalCompetidores; i++) {
        cin >> nome;
        cin >> dificuldade;
        cin >> notas[i];
        total = maisAlta = maisBaixa = notas[i];

        for (int i = 1; i < 7; i++) {
            cin >> notas[i];
            total += notas[i];

            if (notas[i] < maisBaixa) {
                maisBaixa = notas[i];
            }

            if (notas[i] > maisAlta) {
                maisAlta = notas[i];
            }
        }
        
        notaFinal = total - maisAlta - maisBaixa;
        resultadoFinal = dificuldade * notaFinal;

        cout << nome << " " << resultadoFinal << endl;
    }
 
    return 0;
}