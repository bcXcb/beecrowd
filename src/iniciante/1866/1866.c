#include <stdio.h>

int main() {
    int n;
    int t;
    int s;
    int x;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        s = 0;
        x = 1;
        scanf("%d", &t);
        
        for (int j = 0; j < t; j++) {
            s += x;
            x *= -1;
        }
        
        printf("%d\n", s);
    }
    
 
    return 0;
}
