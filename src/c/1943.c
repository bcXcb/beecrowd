#include <stdio.h>

int main() {
    int k;
    int top;
    
    scanf("%d", &k);
    
    if (k < 2) {
        top = 1;
    } else if (k <= 3) {
        top = 3;
    } else if (k <= 5) {
        top = 5;
    } else if (k <= 10) {
        top = 10;
    } else if (k <= 25) {
        top = 25;
    } else if (k <= 50) {
        top = 50;
    } else {
        top = 100;
    }
    
    printf("Top %d\n", top);
}
