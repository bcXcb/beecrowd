#include <iostream>

using namespace std;

int main() {
    char aux;
    int len, k;
    string entrada;

    cin >> entrada;

    len = entrada.length();

    k = len - 1;
    len /= 2;
    for (int i = 0; i < len; i++) {
        aux = entrada[i];
        entrada[i] = entrada[k];
        entrada[k] = aux;
        k--;
    }

    cout << entrada << endl;

    return 0;
}