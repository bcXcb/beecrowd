#include <iostream>
 
using namespace std;
 
int main() {
    int t;
    int pa;
    int pb;
    double g1;
    double g2;
    int years;
    
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        years = 0;
        cin >> pa >> pb >> g1 >> g2;
        
        g1 = g1 / 100;
        g2 = g2 / 100;
         
        while (true) {
            pa = pa + (g1 * pa);
            pb = pb + (g2 * pb);
            years++;
            
            if (years > 100 || pa > pb) {
                break;
            }
        }
        
        if (years > 100) {
            cout << "Mais de 1 seculo." << endl;
        } else {
            cout << years << " anos." << endl;
        }
    }
 
    return 0;
}
