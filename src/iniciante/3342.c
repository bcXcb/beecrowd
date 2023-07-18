#include <stdio.h>
#include <stdbool.h>
 
int main() {
    int a, b, n;
    bool i_eh_par, j_eh_par;
    
    a, b = 0;
 
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        i_eh_par = i % 2 == 0;
        
        for (int j = 0; j < n; j++) {
            j_eh_par = j % 2 == 0;
            
            if (i_eh_par) {
                (j_eh_par) ? a++ : b++;
            } else {
                (j_eh_par) ? b++ : a++;
            }
        }
    }
    
    printf("%d casas brancas e %d casas pretas\n", a, b);
 
    return 0;
}
