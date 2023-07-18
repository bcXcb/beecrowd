#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    int n;
    double a;
    double b;
    double c;
    int x = 2;
    int y = 3;
    int z = 5;
    double av;
    
    cin >> n;
    cout << fixed << setprecision(1);
    
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        av = ((a * x) + (b * y) + (c * z)) / (x + y + z);
        cout << av << endl;
    }
    
 
    return 0;
}
