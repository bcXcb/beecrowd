#include <iostream>
 
using namespace std;
 
int main() {
    char t[16];
    int m;
    int n;
    char eight[8];
    char four[4];
    char two[2];
    char winner;
    int j;
    
    for (int i = 0; i < 16; i++) {
        t[i] = i + 65;
    }
    
    // eight
    for (int i = 0, j = 0; i < 8; i++) {
        cin >> m >> n;
        
        if (m > n) {
            eight[i] = t[j];
        } else {
            eight[i] = t[j + 1];
        }
        
        j += 2;
    }
    
    // four
    for (int i = 0, j = 0; i < 4; i++) {
        cin >> m >> n;
        
        if (m > n) {
            four[i] = t[j];
        } else {
            four[i] = t[j + 1];
        }
        
        j += 2;
    }
    
    // two
    for (int i = 0, j = 0; i < 2; i++) {
        cin >> m >> n;
        
        if (m > n) {
            two[i] = t[j];
        } else {
            two[i] = t[j + 1];
        }
        
        j += 2;
    }
    
    cin >> m >> n;
    
    if (m > n) {
        cout << two[0] << endl;
    } else {
        cout << two[1] << endl;
    }
    
    return 0;
}
