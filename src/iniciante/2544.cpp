#include <iostream>
 
using namespace std;
 
int main() {
    int a;
    int count;
	int sum;
    
	while(cin >> a){
		if(a == 1)
		    cout << 0 << endl;
		else {
			count = 0;
			sum = 1;
			
			for(int i = 1; ; i++) {
				 sum *= 2;
				 count++;
				 
				 if(sum > a)
				    break;
				 if(sum == a)
				    break;
		    }
			
			cout << count << endl;
		}
	}
 
    return 0;
}
