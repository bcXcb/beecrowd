#include <stdio.h>
 
int main() {
    double a, b, c, average;
    const int PA = 2, PB = 3, PC = 5;
    
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    
    average = ((a * PA) + (b * PB) + (c * PC)) / (PA + PB + PC);
    
    printf("MEDIA = %.1lf\n", average);
 
    return 0;
}
