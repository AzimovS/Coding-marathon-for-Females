#include <bits/stdc++.h>
     
using namespace std;
     
int main () {
    	string f, m, s;
     
    	getline(cin, f);
    	getline(cin, m);
    	getline(cin, s);
     
    	int i, j, k;
     
    	char arr[3][3][3];
     
    	arr[0][0][0] = '?';
    	
    	arr[0][0][1] = 'S';
    	arr[0][1][0] = 'M';
    	arr[1][0][0] = 'F';
    	arr[0][1][1] = '?';
    	arr[1][1][0] = '?';
    	arr[1][0][1] = '?';
    	arr[1][1][1] = '?';
     
    	arr[0][0][2] = '?';
      arr[0][2][0] = '?';
      arr[2][0][0] = '?';
      arr[0][2][2] = 'F';
      arr[2][2][0] = 'S';
    	arr[2][0][2] = 'M';
      arr[2][2][2] = '?';
     
    	arr[0][1][2] = '?';
      arr[1][0][2] = '?';
      arr[1][2][0] = '?';
      arr[0][2][1] = '?';
      arr[2][1][0] = '?';
      arr[2][0][1] = '?';
     
    	arr[2][2][1] = '?';
      arr[2][1][2] = '?';
      arr[1][2][2] = '?';
      arr[1][1][2] = 'S';
      arr[1][2][1] = 'M';
      arr[2][1][1] = 'F';
     
    	if (f.compare("rock") == 0)
    		            i = 0;
    	else if (f.compare("paper") == 0)
    		            i = 1;
    	else if (f.compare("scissors") == 0)
    		            i = 2;
     
    	if (m.compare("rock") == 0)
                    j = 0;
      else if (m.compare("paper") == 0)
                    j = 1;
      else if (m.compare("scissors") == 0)
                    j = 2;
     
    	if (s.compare("rock") == 0)
                    k = 0;
      else if (s.compare("paper") == 0)
                    k = 1;
      else if (s.compare("scissors") == 0)
                    k = 2;
     
    	cout << arr[i][j][k] << "\n";
     
    	return 0;
}
