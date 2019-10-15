#include <bits/stdc++.h>
     
using namespace std;
     
int main () {
    	int n, k, c = 0;
     
    	cin >> n >> k;
     
    	for (int i = 0; i < n; ++i) {
    		  int c1 = 0, m;
     
    		  cin >> m;
     
    		  while (m / 10 > 0 || m > 0) {
    			    if (m % 10 == 4) c1++;
    			    else if (m % 10 == 7) c1++;
    			    else {
    				      c1 = 0;
    				      break;
    			    }
     
    			    m /= 10;
    		  }
     
    		  if (c1 <= k) c++;
    	}
     
    	cout << c << "\n";
     
    	return 0;
}
