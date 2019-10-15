#include <bits/stdc++.h>
     
using namespace std;
     
int main(){
     
    	int n, m = 0;
     
    	cin >> n;
     
    	for (int i = 0; m < n; ++i) {
    		if (i == 0) m = 1;
    		else m *= 2;
    	}
     
    	if (m == n) cout << "YES\n";
    	else cout << "NO\n";
     
    	return 0;
}
