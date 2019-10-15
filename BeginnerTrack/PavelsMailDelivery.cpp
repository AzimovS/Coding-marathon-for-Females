#include <bits/stdc++.h>
     
using namespace std;
     
int main () {
    	int n, c = 0;
     
    	cin >> n;
     
    	for (int i = 5; i > 0; --i) {
    		if (n / i > 0) {
    			c += n / i;
    			n = n % i;
    		}
    	}	
     
    	cout << c << "\n";
     
    	return 0;
}
