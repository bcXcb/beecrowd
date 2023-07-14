#include <iostream>
 
using namespace std;
 
int main() {
    char sexo;
    int casos;
    string nome;
    int carrinhos = 0, bonecas = 0;
    
    cin >> casos;
    
    while(casos--) {
        cin >> nome >> sexo;
        
        (toupper(sexo) == 'M') ? carrinhos++ : bonecas++;
    }
 
    cout << carrinhos << " carrinhos" << endl;
    cout << bonecas << " bonecas" << endl;
 
    return 0;
}
