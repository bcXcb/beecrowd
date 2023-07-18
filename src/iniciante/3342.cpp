#include <iostream>
 
using namespace std;
 
int main() {
    int a, b, n;
    bool i_eh_par, j_eh_par;
    
    a, b = 0;
 
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        i_eh_par = i % 2 == 0;
        
        for (int j = 0; j < n; j++) {
            j_eh_par = j % 2 == 0;
            
            if (i_eh_par) {
                (j_eh_par) ? a++ : b++;
            } else {
                (j_eh_par) ? b++ : a++;
            }
        }
    }
    
    cout << a << " casas brancas e " << b << " casas pretas" << endl;
 
    return 0;
}
