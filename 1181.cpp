#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    int l;
    double m[12][12];
    char n;
    
    cin >> l;
    cin >> n;
    
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> m[i][j];
        }
    }
    
    cout << fixed << setprecision(1);
    
    if (toupper(n) == 'S') {
        double sum = 0.0;
        
        for (int j = 0; j < 12; j++) {
            sum += m[l][j];
        }
        
        cout << sum << endl;
    } else {
        double av;
        double acm = 0.0;
        
        for (int j = 0; j < 12; j++) {
            acm += m[l][j];
        }
        
        av = acm / 12.0;
        
        cout << av << endl;
    }
 
    return 0;
}
