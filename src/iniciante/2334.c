#include <stdio.h>
 
int main() {
    unsigned long long p = 0;
    unsigned long long flag = p - 1;

    do {
        scanf("%llu", &p);
        
        if (p != flag) {
            if (p == 0) { printf("0\n"); }
            else { printf("%llu\n", p - 1); };
        }
    } while (p != flag);
 
    return 0;
}