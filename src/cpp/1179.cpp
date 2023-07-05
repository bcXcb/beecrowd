#include <iostream>

using namespace std;

int main() {
    int v;
    int impar[5];
    int par[5];
    int j = 0;
    int k = 0;

    for (int m = 0; m < 15; m++) {
        cin >> v;

        if (v % 2 == 0) {
            if (j < 5) {
                par[j] = v;
                j++;
                if (j == 5) {
                    for (int l = 0; l < 5; l++) {
                        cout << "par[" << l << "] = " << par[l] << endl;
                    }
                    j = 0;
                }
            }
        } else {
            if (k < 5) {
                impar[k] = v;
                k++;
                if (k == 5) {
                    for (int l = 0; l < 5; l++) {
                        cout << "impar[" << l << "] = " << impar[l] << endl;
                    }
                    k = 0;
                }
            }
        }
    }

    for (int y = 0; y < k; y++) {
        cout << "impar[" << y << "] = " << impar[y] << endl;
    }

    for (int z = 0; z < j; z++) {
        cout << "par[" << z << "] = " << par[z] << endl;
    }

    return 0;
}
