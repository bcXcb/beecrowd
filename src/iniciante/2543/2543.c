#include <stdio.h>

int main() {
    int n, id, l, m, total;
    
    while (scanf("%d %d", &n, &id) != EOF) {
        total = 0;
        
        for (int i = 0; i < n; i++) {
            scanf("%d %d", &l, &m);
            
            if (l == id && m == 0) {
                total++;
            }
        }
        
        printf("%d\n", total);
    }
    
    return 0;
}
