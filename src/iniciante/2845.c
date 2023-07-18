#include <stdio.h>
 
int main() {
    int n, m, a;
    
    scanf("%d", &n);
    
    scanf("%d", &a);
    m = a;
    
    while (--n) {
        scanf("%d", &a);
        if (a > m) { m = a; }
    }
    
    printf("%d\n", m + 1);
 
    return 0;
}