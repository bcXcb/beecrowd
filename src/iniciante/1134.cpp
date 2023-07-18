#include <iostream>
 
using namespace std;
 
int main() {
    int f;
    int t[3] = {0};
    
    enum FUEL {
        alcohol = 1,
        diesel,
        gasoline,
        end
    };
    
    do {
        do {
            cin >> f;
        } while (f < 1 || f > 4);
        
        switch (f) {
            case alcohol:
                t[0] = t[0] + 1;
                break;
            case diesel:
                t[1] = t[1] + 1;
                break;
            case gasoline:
                t[2] = t[2] + 1;
        }
    } while (f != 4);
    
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << t[0] << endl;
    cout << "Gasolina: " << t[1] << endl;
    cout << "Diesel: " << t[2] << endl;
 
    return 0;
}
