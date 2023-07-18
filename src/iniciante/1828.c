#include <stdio.h>
#include <string.h>
 
int main() {
    int t;
    char s[21], r[21];

    scanf("%d", &t);
    
    for (int i = 0; i < t; i++) {
        scanf("%s %s", s, r);
        
        printf("Caso #%d: ", i + 1);
        if ((strcmp(s, "pedra") == 0 && ((strcmp(r, "tesoura") == 0) || strcmp(r, "lagarto") == 0)) ||
            (strcmp(s, "papel") == 0 && ((strcmp(r, "pedra") == 0) || strcmp(r, "Spock") == 0)) ||
            (strcmp(s, "tesoura") == 0 && ((strcmp(r, "papel") == 0) || strcmp(r, "lagarto") == 0)) ||
            (strcmp(s, "lagarto") == 0 && ((strcmp(r, "papel") == 0) || strcmp(r, "Spock") == 0)) ||
            (strcmp(s, "Spock") == 0 && ((strcmp(r, "tesoura") == 0) || strcmp(r, "pedra") == 0))) {
                printf("Bazinga!\n");
            }
        else if ((strcmp(r, "pedra") == 0 && ((strcmp(s, "tesoura") == 0) || strcmp(s, "lagarto") == 0)) ||
                 (strcmp(r, "papel") == 0 && ((strcmp(s, "pedra") == 0) || strcmp(s, "Spock") == 0)) ||
                 (strcmp(r, "tesoura") == 0 && ((strcmp(s, "papel") == 0) || strcmp(s, "lagarto") == 0)) ||
                 (strcmp(r, "lagarto") == 0 && ((strcmp(s, "papel") == 0) || strcmp(s, "Spock") == 0)) ||
                 (strcmp(r, "Spock") == 0 && ((strcmp(s, "tesoura") == 0) || strcmp(s, "pedra") == 0))) {
                printf("Raj trapaceou!\n");
        } else { printf("De novo!\n"); }
    }
 
    return 0;
}