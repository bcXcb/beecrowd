#include <iostream>
 
using namespace std;
 
int main() {
    int password;
    const int PASSWORD = 2002;
    
    do {
        cin >> password;
        
        if (password != PASSWORD) {
            cout << "Senha Invalida" << endl;
        }
    } while (password != PASSWORD);
    
    cout << "Acesso Permitido" << endl;
 
    return 0;
}
