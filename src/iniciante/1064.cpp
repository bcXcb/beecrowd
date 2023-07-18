#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double num[6];
    double average;
    int positives = 0;
    double acumulator = 0;

    for (int i = 0; i < 6; i++) {
        cin >> num[i];
        if (num[i] > 0) {
            positives++;
            acumulator += num[i];
        }
    }

    average = acumulator / positives;

    cout << fixed << setprecision(1);
    cout << positives << " valores positivos" << endl;
    cout << average << endl;

    return 0;
}
