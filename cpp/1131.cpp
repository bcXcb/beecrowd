#include <iostream>
 
using namespace std;
 
int main() {
    int repeat;
    int ties = 0;
    int interGoals;
    int gremioGoals;
    int interWins = 0;
    int gremioWins = 0;
    int totalGames = 0;
    
    do {
        cin >> interGoals >> gremioGoals;
        totalGames++;
        
        if (interGoals > gremioGoals) {
            interWins++;
        } else if (interGoals < gremioGoals) {
            gremioWins++;
        } else {
            ties++;
        }
        
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> repeat;
    } while (repeat != 2);
    
    cout << totalGames << " grenais" << endl;
    cout << "Inter:" << interGoals << endl;
    cout << "Gremio:" << gremioGoals << endl;
    cout << "Empates:" << ties << endl;
    
    if (interWins > gremioWins) {
        cout << "Inter venceu mais" << endl;
    }
    
    if (interWins < gremioWins) {
        cout << "Gremio venceu mais" << endl;
    }
 
    return 0;
}
