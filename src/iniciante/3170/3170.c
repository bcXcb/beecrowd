#include <stdio.h>
 
int main() {
    int b, g, f;
        
    scanf("%d", &b);
    scanf("%d", &g);
    
    f = (g / 2) - b;
    
    if (f <= 0) {
        printf("Amelia tem todas bolinhas!\n");
    } else {
        printf("Faltam %d bolinha(s)\n", f);
    }
 
    return 0;
}