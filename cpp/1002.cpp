#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double area;
    double raio;
    const double N = 3.14159;

    cin >> raio;

    area = N * (raio * raio);

    cout << fixed << setprecision(4);
    cout << "A=" << area << endl;

    return 0;
}
