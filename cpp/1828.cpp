#include <iostream>
 
using namespace std;
 
int main() {
    int t;
    string s;
    string r;

    cin >> t;
    
    for (int i = 0; i < t; i++) {
        cin >> s >> r;
        
        cout << "Caso #" << i + 1 << ": ";
        if ((s=="pedra" and (r=="tesoura" or r=="lagarto")) or
            (s=="papel" and (r=="pedra" or r=="Spock")) or
            (s=="tesoura" and (r=="papel" or r=="lagarto")) or
            (s=="lagarto" and (r=="papel" or r=="Spock")) or
            (s=="Spock" and (r=="tesoura" or r=="pedra"))) {
            cout << "Bazinga!" << endl;
        } else if ((r=="pedra" and (s=="tesoura" or s=="lagarto")) or
                   (r=="papel" and (s=="pedra" or s=="Spock")) or
                   (r=="tesoura" and (s=="papel" or s=="lagarto")) or
                   (r=="lagarto" and (s=="papel" or s=="Spock")) or
                   (r=="Spock" and (s=="tesoura" or s=="pedra"))) {
            cout << "Raj trapaceou!" << endl;
        } else {
            cout << "De novo!" << endl;
        }
    }
 
    return 0;
}
