#include <stdio.h>
 
int main() {
    int n, v, e = 1, a;
    
    scanf("%d", &n);
    scanf("%d", &a);
    n--;
    
    while (n--) {
        scanf("%d", &v);
        if (a < v) { e = 0; }
    }
    
    if (e) { printf("S\n"); }
    else { printf("N\n"); }
 
    return 0;
}