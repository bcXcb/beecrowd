#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    char o;
    double av;
    int g = 12;
    int h = 12;
    double m[g][h];
    double sum = 0.0;
    
    cin >> o;
    
    for (int i = 0; i < g; i++) {
        for (int j = 0; j < h; j++) {
            cin >> m[i][j];
        }
    }
    
    for (int i = 0; i < g; i++) {
        for (int j = 0; j < h; j++) {
            if (i == j) {
                for (int k = 0; k < j; k++) {
                    sum += m[i][k];
                }
            }
        }
    }
    
    cout << fixed << setprecision(1);
    
    if (toupper(o) == 'S') {
        cout << sum << endl;
    } else {
        av = sum / ((g * h - h) / 2);
        cout << av << endl;
    }
 
    return 0;
}
