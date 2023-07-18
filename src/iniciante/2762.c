#include <stdio.h>

int main() {
    int inteira, decimal;
    
    scanf("%d.%d", &inteira, &decimal);
    printf("%d.%d\n", decimal, inteira);

    return 0;
}