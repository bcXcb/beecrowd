#include <stdio.h>
 
int main() {
    double a, b, average;
    const double PA = 3.5, PB = 7.5;
    
    scanf("%lf", &a);
    scanf("%lf", &b);
    
    average = ((a * PA) + (b * PB)) / (PA + PB);
    
    printf("MEDIA = %.5lf\n", average);
 
    return 0;
}
