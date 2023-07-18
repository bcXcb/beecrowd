#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    const char STR[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("%c", STR[i]);
    }
    printf("\n");
 
    return 0;
}