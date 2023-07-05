#include <stdio.h>
 
int main() {
    int a;
    int b;
    int d;
    int p[2];
    int c[2];
    
    scanf("%d%d%d%d", &p[0], &c[0], &p[1], &c[1]);
    
    a = p[0] * c[0];
    b = p[1] * c[1];
    
    if (a > b) {
        d = -1;
    } else if (a < b) {
        d = 1;
    } else {
        d = 0;
    }
    
    printf("%d\n", d);
 
    return 0;
}
