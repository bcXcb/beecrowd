#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    double av;
    double a[2];
    
    for (int i = 0; i < 2; i++)
        do {
            cin >> a[i];
            
            if (a[i] < 0 || a[i] > 10)
                cout << "nota invalida" << endl;
        } while (a[i] < 0 || a[i] > 10);
    
    av = (a[0] + a[1]) / 2;
    cout << fixed << setprecision(2);
    cout << "media = " << av << endl;
 
    return 0;
}
