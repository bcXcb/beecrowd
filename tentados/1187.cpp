#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    char o;
    const int ORDER = 7;
    double m[ORDER][ORDER];
    
    cin >> o;
    
    // fill the matrix
    int c = 1;
    for (int i = 0; i < ORDER; i++) {
        for (int j = 0; j < ORDER; j++) {
            cin >> m[i][j];
        }
    }
    
    // calculate the sum
    double sum = 0;
    int p = 1;
    int q = ORDER - 1;
    int t = 0;
    for (int i = 0; i < ORDER; i++) {
        for (int j = p; j <= q; j++) {
            sum += m[i][j];
            t++;
        }
        p++;
        q--;
    }
    
    cout << fixed << setprecision(1);
    if (toupper(o) == 'S') {
        cout << sum << endl;
    } else {
        double average;
        average = sum / t;
        cout << average << endl;
    }
 
    return 0;
}
