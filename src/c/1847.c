#include <stdio.h>

int main() {
    int a, b, c;
    char feliz[] = ":)";
    char triste[] = ":(";

    scanf("%d %d %d", &a, &b, &c);

    if (a > b && c >= b) { printf("%s\n", feliz); }
    if (a < b && c <= b) { printf("%s\n", triste); }
    if (a < b && b < c) { ((c - b) < (b - a)) ? printf("%s\n", triste) : printf("%s\n", feliz); }
    if (a > b && b > c) { (b - c) < (a - b) ? printf("%s\n", feliz) : printf("%s\n", triste); }
    if (a == b) { (b < c) ? printf("%s\n", feliz) : printf("%s\n", triste); }

    return 0;
}