#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    double a, b, average;
    const double PA = 3.5, PB = 7.5;
    
    cin >> a;
    cin >> b;
    
    average = ((a * PA) + (b * PB)) / (PA + PB);
    
    cout << fixed << setprecision(5);
    cout << "MEDIA = " << average << endl;
 
    return 0;
}
