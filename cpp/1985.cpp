#include <iostream>
#include <iomanip>
 
using namespace std;

typedef struct {
    int id;
    double price;
} Product;

int main() {
    Product p[5];
    int x = 1001;
    double y = 1.50;
    int q;
    double t = 0.0;
    int id;
    int n;
    
    for (int i = 0; i < 5; i++) {
        p[i].id = x++;
        p[i].price = y++;
    }
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> id >> q;
        
        for (int i = 0; i < 5; i++) {
            if (p[i].id == id) {
                t += p[i].price * q;
            }
        }
    }
    
    cout << fixed << setprecision(2);
    cout << t << endl;
 
    return 0;
}
