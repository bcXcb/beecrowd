#include <iostream>

using namespace std;

int main() {
    int num[5];
    int positives = 0;
    int negatives = 0;
    int pairs = 0;
    int odd = 0;

    for (int i = 0; i < 5; i++) {
        cin >> num[i];
        if (num[i] % 2 == 0) {
            pairs++;
        } else {
            odd++;
        }

        if (num[i] > 0) {
            positives++;
        }
        if (num[i] < 0) {
            negatives++;
        }
    }

    cout << pairs << " valor(es) par(es)" << endl;
    cout << odd << " valor(es) impar(es)" << endl;
    cout << positives << " valor(es) positivo(s)" << endl;
    cout << negatives << " valor(es) negativo(s)" << endl;

    return 0;
}
