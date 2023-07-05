#include <iostream>
 
using namespace std;
 
int main() {
    string musicas[] = {
        "PROXYCITY",
        "P.Y.N.G.",
        "DNSUEY!",
        "SERVERS",
        "HOST!",
        "CRIPTONIZE",
        "OFFLINE DAY",
        "SALT",
        "ANSWER!",
        "RAR?",
        "WIFI ANTENNAS"
    };
    int c, btn[2], indice;
    
    cin >> c;
    
    for (int i = 0; i < c; i++) {
        cin >> btn[0] >> btn[1];

        indice = btn[0] + btn[1];

        cout << musicas[indice] << endl;
    }
 
    return 0;
}