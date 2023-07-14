#include <stdio.h>
 
int main() {
    int cases;
    char name[21], race;
    int hobbits, humans, elves, dwarves, wizzards;
    
    hobbits = humans = elves = dwarves = wizzards = 0;
    
    scanf("%d", &cases);
    
    while (cases--) {
        scanf("%s %c", name, &race);
        
        switch (race) {
            case 'A':
                dwarves++;
                break;
            case 'E':
                elves++;
                break;
            case 'H':
                humans++;
                break;
            case 'M':
                wizzards++;
                break;
            case 'X':
                hobbits++;
        }
    }
    
    printf("%d Hobbit(s)\n", hobbits);
    printf("%d Humano(s)\n", humans);
    printf("%d Elfo(s)\n", elves);
    printf("%d Anao(oes)\n", dwarves);
    printf("%d Mago(s)\n", wizzards);
 
    return 0;
}