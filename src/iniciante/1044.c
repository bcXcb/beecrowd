#include <stdio.h>

int main() {
    int a;
    int b;

    scanf("%d%d", &a, &b);

    if (a % b == 0 || b % a == 0) {
        puts("Sao Multiplos");
    } else {
        puts("Nao sao Multiplos");
    }

    return 0;
}
