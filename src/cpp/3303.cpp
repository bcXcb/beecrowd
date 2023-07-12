#include <iostream>

using namespace std;
 
int main() {
    string palavra;
    
    cin >> palavra;
        
    if (palavra.length() >= 10) {
        printf("palavrao\n");
    } else {
        printf("palavrinha\n");
    }
 
    return 0;
}