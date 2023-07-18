#include <iostream>

using namespace std;

int main() {
    int turistas;
    string movimento;
    int totalTuristas = 0, totalJipes = 0;
    
    while (true) {
        cin >> movimento;
        if (movimento == "ABEND") {
            break;
        }
        cin >> turistas;
        if (movimento == "SALIDA") {
            totalJipes++;
            totalTuristas += turistas;
        } else {
            totalJipes--;
            totalTuristas -= turistas;
        }
    }

    cout << totalTuristas << endl;
    cout << totalJipes << endl;

    return 0;
}