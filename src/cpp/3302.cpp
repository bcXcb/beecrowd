#include <iostream>
#include <cstdlib>
 
using namespace std;
 
int main() {
    int n, size, newSize;
    int* ptr = (int*) malloc(sizeof(int));
    
    cin >> n;
    size = 1;
    newSize = size + 1;
    
    for (int i = 0; i < n; i++) {
        cin >> ptr[i];
        ptr = (int*) realloc(ptr, newSize++ * sizeof(int));
    }
    
    for (int i = 0; i < n; i++) {
        cout << "resposta " << i + 1 << ": " << ptr[i] << endl;
    }
 
    return 0;
}
