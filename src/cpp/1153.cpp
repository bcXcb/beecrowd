#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    int fat;
    
    cin >> n;
    
    fat = n;
    
    for (int i = n; i >= 2; i--) {
        fat = fat * (i - 1);
    }
    
    cout << fat << endl;
 
    return 0;
}
