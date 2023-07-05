#include <stdio.h>
 
int main() {
    int x = 7;
    int y = 4;
    int n = 3;
    int z = 1;
    int m = 5;
    int v[] = {'A', 'B', 'C', 'D', 'E'};
    
    for (int i = 0; i < 9; i++) {
        if (i < 5) {
            if (i == 0) {
                for (int k = x--; k >= 1; k--) {
                    printf(" ");
                }
                printf("%c\n", v[i]);
            } else {
                for (int k = x--; k >= 1; k--) {
                    printf(" ");
                }
                printf("%c", v[i]);
                for (int j = z; j >= 1; j--) {
                    printf(" ");
                }
                printf("%c\n", v[i]);
                z += 2;
            }
        } else {
            if (i == 8) {
                for (int k = y++; k >= 1; k--) {
                    printf(" ");
                }
                printf("%c\n", v[n]);
            } else {
                for (int k = y++; k >= 1; k--) {
                    printf(" ");
                }
                printf("%c", v[n]);
                
                for (int p = m; p >= 1; p--) {
                    printf(" ");
                }
                printf("%c\n", v[n]);
            }
            
            m -= 2;
            n--;
        }
    }
    
 
    return 0;
}
