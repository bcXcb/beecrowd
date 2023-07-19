#include <stdio.h>
 
int main() {
    int n, a, b;
    int points_of_a, points_of_b;
    
    do {
        points_of_a = points_of_b = 0;
        scanf("%d", &n);
        
        if (n > 0) {
            for (int i = 0; i < n; i++) {
                scanf("%d %d", &a, &b);
                
                if (a > b) { points_of_a++; }
                if (b > a) { points_of_b++; }
            }
            
            printf("%d %d\n", points_of_a, points_of_b);
        }
    } while (n > 0);
 
    return 0;
}
