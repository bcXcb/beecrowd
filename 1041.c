#include <stdio.h>

typedef struct {
    double x;
    double y;
} Point;

int main() {
    Point p;

    scanf("%lf%lf", &p.x, &p.y);

    if (p.x != 0 && p.y == 0) {
        puts("Eixo X");
    } else if (p.x == 0 && p.y != 0) {
        puts("Eixo Y");
    } else if (p.x == 0 && p.y == 0) {
        puts("Origem");
    } else if (p.x < 0 && p.y < 0) {
        puts("Q3");
    } else if (p.x < 0 && p.y > 0) {
        puts("Q2");
    } else if (p.x > 0 && p.y < 0) {
        puts("Q4");
    } else {
        puts("Q1");
    }

    return 0;
}
