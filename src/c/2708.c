#include <stdio.h>
#include <string.h>

int main() {
    int turistas;
    char movimento[101];
    int totalTuristas = 0, totalJipes = 0;
    
    while (1) {
        scanf("%s", movimento);

        if (strcmp(movimento, "ABEND") == 0) {
            break;
        }

        scanf("%d", &turistas);
        
        if (strcmp(movimento, "SALIDA") == 0) {
            totalJipes++;
            totalTuristas += turistas;
        } else {
            totalJipes--;
            totalTuristas -= turistas;
        }
    }

    printf("%d\n", totalTuristas);
    printf("%d\n", totalJipes);

    return 0;
}