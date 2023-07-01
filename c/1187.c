#include <stdio.h>
 
int main() {
    char o;
    const int O = 12;
    double m[O][O], soma = 0;
    int p = 1, q = O - 2, t = 0;

    // 'S': soma ou 'M': média
    scanf("%c", &o);

    // preenche a matriz com entradas do usuário
    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            scanf("%lf", &m[i][j]);
        }
    }

    // calcula a soma e a quantidade de elementos do triângulo superior
    for (int i = 0; i < O; i++) {
        for (int j = p; j <= q; j++) {
            soma += m[i][j];
            t++;
        }
        p++;
        q--;
    }


    if (o == 'S') {
        printf("%.1lf\n", soma);
    } else {
        double media = soma / t;
        printf("%.1lf\n", media);
    }

    return 0;
}