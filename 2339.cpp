#include <iostream>
 
using namespace std;
 
int main() {
    int a;
    int b;
    int c;
    
    cin >> a >> b >> c;
    
    (a * c > b) ? cout << "N" << endl : cout << "S" << endl;
 
    return 0;
}
