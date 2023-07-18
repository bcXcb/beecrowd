#include <iostream>
 
using namespace std;
 
int main() {
    int total = 0;
    const int BUF_SIZE = 6;
    int p[BUF_SIZE];
    const int G[] = {300, 1500, 600, 1000, 150, 225};
    
    p[BUF_SIZE - 1] = 1;  // [inf] [inf] ... [1]
    
    for (int i = 0; i < BUF_SIZE - 1; i++) {
        cin >> p[i];
    }
    
    for (int i = 0; i < BUF_SIZE; i++) {
        total += p[i] * G[i];
    }
    
    cout << total << endl;
 
    return 0;
}
