#include <stdio.h>

int main() {
    double area;
    double raio;
    const double N = 3.14159;

	scanf("%lf", &raio);

    area = N * (raio * raio);

	printf("A=%.4lf\n", area);

    return 0;
}
