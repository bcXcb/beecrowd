#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double v;
    int b[6] = {0};
    int c[6] = {0};

    cin >> v;

    int valor = round(v * 100); // Converter para centavos e arredondar para o valor mais próximo

    // Notas
    b[0] = valor / 10000;
    valor %= 10000;
    b[1] = valor / 5000;
    valor %= 5000;
    b[2] = valor / 2000;
    valor %= 2000;
    b[3] = valor / 1000;
    valor %= 1000;
    b[4] = valor / 500;
    valor %= 500;
    b[5] = valor / 200;
    valor %= 200;

    // Moedas
    c[0] = valor / 100;
    valor %= 100;
    c[1] = valor / 50;
    valor %= 50;
    c[2] = valor / 25;
    valor %= 25;
    c[3] = valor / 10;
    valor %= 10;
    c[4] = valor / 5;
    valor %= 5;
    c[5] = valor;

    cout << "NOTAS:" << endl;
    cout << b[0] << " nota(s) de R$ 100.00" << endl;
    cout << b[1] << " nota(s) de R$ 50.00" << endl;
    cout << b[2] << " nota(s) de R$ 20.00" << endl;
    cout << b[3] << " nota(s) de R$ 10.00" << endl;
    cout << b[4] << " nota(s) de R$ 5.00" << endl;
    cout << b[5] << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << c[0] << " moeda(s) de R$ 1.00" << endl;
    cout << c[1] << " moeda(s) de R$ 0.50" << endl;
    cout << c[2] << " moeda(s) de R$ 0.25" << endl;
    cout << c[3] << " moeda(s) de R$ 0.10" << endl;
    cout << c[4] << " moeda(s) de R$ 0.05" << endl;
    cout << c[5] << " moeda(s) de R$ 0.01" << endl;

    return 0;
}