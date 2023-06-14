#include <stdio.h>

int main() {
    double a;
    double b;
    double c;
    double o1;
    double o2;
    double o3;

    scanf("%lf%lf%lf", &a, &b, &c);

    if (a > b) {
        if (a > c) {
            o1 = a;
            if (b > c) {
                o2 = b;
                o3 = c;
            } else {
                o2 = c;
                o3 = b;
            }
        } else {
            o1 = c;
            o2 = a;
            o3 = b;
        }
    } else {
        if (a < c) {
            o3 = a;
            if (b > c) {
                o1 = b;
                o2 = c;
            } else {
                o1 = c;
                o2 = b;
            }
        } else {
            o1 = b;
            o2 = a;
            o3 = c;
        }
    }

    a = o1;
    b = o2;
    c = o3;

    if (a >= b + c || b >= a + c || c >= a + b) {
        puts("NAO FORMA TRIANGULO");
    } else {
        a = a * a;
        b = b * b;
        c = c * c;

        if (a == b + c || b == a + c || c == a + b) {
            puts("TRIANGULO RETANGULO");
        } else if (a > b + c || b > a + c || c > a + b) {
            puts("TRIANGULO OBTUSANGULO");
        } else {
            puts("TRIANGULO ACUTANGULO");
        }

        a = o1;
        b = o2;
        c = o3;

        if (a == b && a == c && b == c) {
            puts("TRIANGULO EQUILATERO");
        }
        if ((a == b && a != c) || (a == c && a != b) ||
        (b == c && b != a)) {
            puts("TRIANGULO ISOSCELES");
        }
    }

    return 0;
}
