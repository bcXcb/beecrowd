#include <iostream>
 
using namespace std;
 
int main() {
    int desiredPressure;
    int pressureRead;
    int diference;
 
    cin >> desiredPressure;
    cin >> pressureRead;
    
    diference = desiredPressure - pressureRead;
    
    cout << diference << endl;
 
    return 0;
}
