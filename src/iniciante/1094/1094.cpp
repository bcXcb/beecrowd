#include <iostream>
#include <string>
#include <iomanip>
 
using namespace std;
 
int main() {
    int n;
    int amount = 0;
    char type;
    int total = 0;
    int totalC = 0;
    int totalR = 0;
    int totalS = 0;
    double percentC;
    double percentR;
    double percentS;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> amount >> type;
        total += amount;
        
        if (islower(type)) {
            type = toupper(type);
        }
        
        if (type == 'C') {
            totalC += amount;
        } else if (type == 'R') {
            totalR += amount;
        } else {
            totalS += amount;
        }
    }
    
    percentC = totalC * 100.00 / total;
    percentR = totalR * 100.00 / total;
    percentS = totalS * 100.00 / total;
 
    cout << fixed << setprecision(2);
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << totalC << endl;
    cout << "Total de ratos: " << totalR << endl;
    cout << "Total de sapos: " << totalS << endl;
    cout << "Percentual de coelhos: " << percentC << " %" << endl;
    cout << "Percentual de ratos: " << percentR << " %" << endl;
    cout << "Percentual de sapos: " << percentS << " %" << endl;
 
    return 0;
}
