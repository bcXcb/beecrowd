#include <iostream>

using namespace std;

int main() {
    int m, n;
    char times[16], oitavas[8], quartas[4], semifinal[2], vencedor;

    // preenche vetor "times" com letras de A a P, correspondentes aos times
    for (int i = 0; i < 16; i++) {
        times[i] = i + 65; // 65 corresponde ao caractere 'A' na tabela ASCII, 66: 'B', e assim sucessivamente
    }

    // preenche vetor "oitavas" com vencedores das oitavas
    for (int i = 0, j = 0; i < 8; i++) {
        cin >> m >> n;
        oitavas[i] = (m > n) ? times[j] : times[j + 1];
        j += 2;
    }

    // preenche vetor "quartas" com vencedores das quartas
    for (int i = 0, j = 0; i < 4; i++) {
        cin >> m >> n;
        quartas[i] = (m > n) ? oitavas[j] : oitavas[j + 1];
        j += 2;
    }

    // preenche vetor "semifinal" com os vencedores da semifinal
    for (int i = 0, j = 0; i < 2; i++) {
        cin >> m >> n;
        semifinal[i] = (m > n) ? quartas[j] : quartas[j + 1];
        j += 2;
    }

    // partida final
    cin >> m >> n;
    
    vencedor = (m > n) ? semifinal[0] : semifinal[1];
    cout << vencedor << endl;

    return 0;
}