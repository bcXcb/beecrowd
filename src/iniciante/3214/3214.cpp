#include <iostream>

using namespace std;

int main() {
    int e, f, c;
    int posse, comprou, sobrou, tomou;
    
    cin >> e;
    cin >> f;
    cin >> c;
    
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
    
    cout << tomou << endl;
}
