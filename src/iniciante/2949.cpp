#include <iostream>

using namespace std;
 
int main() {
    int cases;
    string name;
    char race;
    int hobbits, humans, elves, dwarves, wizzards;
    
    hobbits = humans = elves = dwarves = wizzards = 0;
    
    cin >> cases;
    
    while (cases--) {
        cin >> name >> race;
        
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
    
    cout << hobbits << " Hobbit(s)" << endl;
    cout << humans << " Humano(s)" << endl;
    cout << elves << " Elfo(s)" << endl;
    cout << dwarves << " Anao(oes)" << endl;
    cout << wizzards << " Mago(s)" << endl;
 
    return 0;
}
