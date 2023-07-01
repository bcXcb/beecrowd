#include <stdio.h>

int main() {
    int m, n;
    char times[16], oitavas[8], quartas[4], semifinal[2], vencedor;

    // preenche vetor "times" com letras de A a P, correspondentes aos times
    for (int i = 0; i < 16; i++) {
        times[i] = i + 65; // 65 corresponde ao caractere 'A' na tabela ASCII, 66: 'B', e assim sucessivamente
    }

    // preenche vetor "oitavas" com vencedores das oitavas
    for (int i = 0, j = 0; i < 8; i++) {
        scanf("%d %d", &m, &n);
        
        if (m > n) {
            oitavas[i] = times[j];
        } else {
            oitavas[i] = times[j + 1];
        }
        
        j = j + 2;
    }

    // preenche vetor "quartas" com vencedores das quartas
    for (int i = 0, j = 0; i < 4; i++) {
        scanf("%d %d", &m, &n);
        
        if (m > n) {
            quartas[i] = oitavas[j];
        } else {
            quartas[i] = oitavas[j + 1];
        }
        
        j = j + 2;
    }

    // preenche vetor "semifinal" com os vencedores da semifinal
    for (int i = 0, j = 0; i < 2; i++) {
        scanf("%d %d", &m, &n);
        
        if (m > n) {
            semifinal[i] = quartas[j];
        } else {
            semifinal[i] = quartas[j + 1];
        }
        
        j = j + 2;
    }

    // partida final
    scanf("%d %d", &m, &n);
    
    if (m > n) {
        vencedor = semifinal[0];
    } else {
        vencedor = semifinal[1];
    }

    printf("%c\n", vencedor);

    return 0;
}