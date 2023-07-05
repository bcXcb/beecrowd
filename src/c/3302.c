#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int n, size, newSize;
    int* ptr = (int*) malloc(sizeof(int));
    
    scanf("%d", &n)
    size = 1;
    newSize = size + 1;
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
        ptr = (int*) realloc(ptr, newSize++ * sizeof(int));
    }
    
    for (int i = 0; i < n; i++) {
        printf("resposta %d: %d\n", i + 1, ptr[i]);
    }
 
    return 0;
}
