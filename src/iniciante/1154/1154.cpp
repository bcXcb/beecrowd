#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    int age;
    int sum = 0;
    int total = 0;
    double average;
    
    do {
        cin >> age;
        
        if (age >= 0) {
            total++;
            sum += age;
        }
    } while(age >= 0);
 
    average = (double) sum / total;
 
    cout << fixed << setprecision(2);
    cout << average << endl;
 
    return 0;
}
