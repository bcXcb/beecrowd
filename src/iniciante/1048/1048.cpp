#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double oldSalary;
    double newSalary;
    double readjustment;
    int percentage;

    cin >> oldSalary;

    if (oldSalary >= 0.00 && oldSalary <= 400.00) {
        readjustment = 0.15 * oldSalary;
        percentage = 15;
    } else if (oldSalary <= 800.00) {
        readjustment = 0.12 * oldSalary;
        percentage = 12;
    } else if (oldSalary <= 1200.00) {
        readjustment = 0.1 * oldSalary;
        percentage = 10;
    } else if (oldSalary <= 2000.00) {
        readjustment = 0.07 * oldSalary;
        percentage = 7;
    } else {
        readjustment = 0.04 * oldSalary;
        percentage = 4;
    }

    newSalary = oldSalary + readjustment;

    cout << fixed << setprecision(2);
    cout << "Novo salario: " << newSalary << endl;
    cout << "Reajuste ganho: " << readjustment << endl;
    cout << "Em percentual: " << percentage << " %" << endl;

    return 0;
}
