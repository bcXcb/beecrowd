#include <stdio.h>

int main() {
    int e, f, c;
    int posse, comprou, sobrou, tomou;
    
    scanf("%d", &e);
    scanf("%d", &f);
    scanf("%d", &c);
    
    posse = e + f;
    comprou = posse / c;
    sobrou = posse - (comprou * c);
    tomou = comprou;
    
    while (posse >= c) {
        posse = comprou + sobrou;
        comprou = posse / c;
        sobrou = posse - (comprou * c);
        tomou += comprou;
    }
    
    printf("%d\n", tomou);
}
