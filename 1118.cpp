#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    double m;
    double n;
    double av;
    int newCalculation;
    
    cout << fixed << setprecision(2);
    
    do {
        // validation of the value
        do {
            cin >> m;
            
            if (m < 0 || m > 10) {
                cout << "nota invalida" << endl;
            }
        } while (m < 0 || m > 10);
        
        // validation of the value
        do {
            cin >> n;
            
            if (n < 0 || n > 10) {
                cout << "nota invalida" << endl;
            }
        } while (n < 0 || n > 10);
        
        av = (m + n) / 2;
        
        cout << "media" << " = " << av << endl;
        
        do {
            cout << "novo calculo" << " (1-sim 2-nao)" << endl;
            cin >> newCalculation;
        } while (newCalculation != 1 && newCalculation != 2);
    } while (newCalculation == 1);
 
    return 0;
}
