#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    double a, b, c, average;
    const int PA = 2, PB = 3, PC = 5;
    
    cin >> a;
    cin >> b;
    cin >> c;
    
    average = ((a * PA) + (b * PB) + (c * PC)) / (PA + PB + PC);
    
    cout << fixed << setprecision(1);
    cout << "MEDIA = " << average << endl;
 
    return 0;
}
