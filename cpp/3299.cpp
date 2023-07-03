#include <iostream>
 
using namespace std;
 
int main() {
    int len;
    string n;
    bool malaSuerte = false;
    
    cin >> n;

    len = n.length();

    for (int i = 0; i < len; i++) {
        if (n[i] == '1' and n[i + 1] == '3') {
            malaSuerte = true;
            break;
        }
    }

    if (malaSuerte) {
        cout << n << " es de Mala Suerte" << endl;
    } else {
        cout << n << " NO es de Mala Suerte" << endl;
    }
 
    return 0;
}