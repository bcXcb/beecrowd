#include <iostream>
 
using namespace std;
 
int main() {
    int days;
    int balance;
    int movement;
    int lowestBalance;
    
    cin >> days >> balance;
    
    lowestBalance = balance;
    
    for (int i = 0; i < days; i++) {
        cin >> movement;
        balance += movement;
        
        if (balance < lowestBalance) {
            lowestBalance = balance;
        }
    }
    
    cout << lowestBalance << endl;
 
    return 0;
}
