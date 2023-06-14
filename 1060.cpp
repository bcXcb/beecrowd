#include <iostream>

using namespace std;

int main() {
    double num;
    int positives = 0;

    for (int i = 0; i < 6; i++) {
        cin >> num;
        if (num > 0) {
            positives++;
        }
    }

    cout << positives << " valores positivos" << endl;

    return 0;
}
