#include <stdio.h>
#include <stdbool.h>
 
int main() {
    int t;
    int pa;
    int pb;
    double g1;
    double g2;
    int years;
    
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++) {
        years = 0;
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
        
        g1 = g1 / 100;
        g2 = g2 / 100;
         
        while (true) {
            pa = pa + (g1 * pa);
            pb = pb + (g2 * pb);
            years++;
            
            if (years > 100 || pa > pb) {
                break;
            }
        }
        
        if (years > 100) {
            printf("Mais de 1 seculo.\n");
        } else {
            printf("%d anos.\n", years);
        }
    }
 
    return 0;
}