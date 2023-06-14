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
    
    int s = 1;
    for (int i = 0; i < g; i++) {
        for (int j = 0; j < h; j++) {
            cin >> m[i][j];
        }
    }
    
    cout << fixed << setprecision(1);
    
    for (int i = 0; i < g; i++) {
        for (int j = 0; j < h; j++) {
            if (i == j) {
                for (int k = j + 1; k < h; k++) {
                    sum += m[i][k];
                }
            }
        }
    }
    
    if (toupper(o) == 'S') {
        cout << sum << endl;
    } else {
        av = sum / ((g * h - h) / 2);
        cout << av << endl;
    }
 
    return 0;
}
