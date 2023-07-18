#include <stdio.h>

int main() {
    double a;
    double b;
    double c;
    double area;
    double perimeter;

    scanf("%lf%lf%lf", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        perimeter = a + b + c;
        printf("Perimetro = %.1lf\n", perimeter);
    } else {
        area = ((a + b) * c) / 2;
        printf("Area = %.1lf\n", area);
    }

    return 0;
}
