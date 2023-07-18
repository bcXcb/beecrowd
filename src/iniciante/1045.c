#include <stdio.h>
#include <stdlib.h>

int main() {
    double* v = (double*) malloc(3 * sizeof(double));

    scanf("%lf %lf %lf", &*v, &*(v + 1), &*(v + 2));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (*(v + i) > *(v + j)) {
                *(v + i) = *(v + i) + *(v + j);
                *(v + j) = *(v + i) - *(v + j);
                *(v + i) = *(v + i) - *(v + j);
            }
        }
    }

    if (*v >= *(v + 1) + *(v + 2) || *(v + 1) >= *v + *(v + 2) || *(v + 2) >= *v + *(v + 1)) {
        puts("NAO FORMA TRIANGULO");
    } else {
        *v = *v * *v;
        *(v + 1) = *(v + 1) * *(v + 1);
        *(v + 2) = *(v + 2) * *(v + 2);

        if (*v == *(v + 1) + *(v + 2) || *(v + 1) == *v + *(v + 2) || *(v + 2) == *v + *(v + 1)) {
            puts("TRIANGULO RETANGULO");
        } else if (*v > *(v + 1) + *(v + 2) || *(v + 1) > *v + *(v + 2) || *(v + 2) > *v + *(v + 1)) {
            puts("TRIANGULO OBTUSANGULO");
        } else {
            puts("TRIANGULO ACUTANGULO");
        }

        if (*v == *(v + 1) && *v == *(v + 2) && *(v + 1) == *(v + 2)) {
            puts("TRIANGULO EQUILATERO");
        }
        if ((*v == *(v + 1) && *v != *(v + 2)) || (*v == *(v + 2) && *v != *(v + 1)) ||
        (*(v + 1) == *(v + 2) && *(v + 1) != *v)) {
            puts("TRIANGULO ISOSCELES");
        }
    }

    return 0;
}
