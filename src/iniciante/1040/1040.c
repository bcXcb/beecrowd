#include <stdio.h>

int main() {
    double av;
    double sc[4];
    double examScore;
    const int wght[] = {2, 3, 4, 1};

    scanf("%lf%lf%lf%lf", &sc[0], &sc[1], &sc[2], &sc[3]);

    av = ((sc[0] * wght[0]) + (sc[1] * wght[1]) +
    (sc[2] * wght[2]) + (sc[3] * wght[3])) /
    (wght[0] + wght[1] + wght[2] + wght[3]);

    printf("Media: %.1lf\n", av);

    if (av < 5) {
        puts("Aluno reprovado.");
    } else if (av < 7) {
        puts("Aluno em exame.");
        scanf("%lf", &examScore);
        printf("Nota do exame: %.1lf\n", examScore);
        av = (av + examScore) / 2;

        if (av < 5) {
            puts("Aluno reprovado.");
        } else {
            puts("Aluno aprovado.");
            printf("Media final: %.1lf\n", av);
        }
    } else {
        puts("Aluno aprovado.");
    }

    return 0;
}
