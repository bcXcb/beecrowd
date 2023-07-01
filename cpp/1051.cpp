#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    double salary;
    double income;
    
    cin >> salary;
    
    if (salary <= 2000) {
        income = 0.00;
    } else if (salary <= 3000) {
        income = 0.08 * (salary - 2000);
    } else if (salary <= 4500) {
        income = 0.00;
        income += 0.08 * 1000;
        income += 0.18 * (salary - 3000);
    } else {
        income = 0.00;
        income += 0.08 * 1000;
        income += 0.18 * 1500;
        income += 0.28 * (salary - 4500);
    }
        
    if (income == 0.00) {
        cout << "Isento" << endl;
    } else {
        cout << fixed << setprecision(2);
        cout << "R$ " << income << endl;
    }
 
    return 0;
}
