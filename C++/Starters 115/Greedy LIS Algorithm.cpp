#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
	int tt;
	cin >> tt;
	while(tt--) {
	    int n, x;
	    cin >> n >> x;
	    
	    if(x == 0) {
	        for(int i=1; i<=n; i++)
	            cout << i << " ";
	    }
	    else if(x == n || abs(n-x) == 1)
	        cout << -1;
	    else {
	       cout << n << " ";
	       for(int i=n-1; i>= (x+2); i--)
	            cout << i << " ";
	       for(int i=1; i<=x+1; i++)
	            cout << i << " ";
	      }   
	      cout << endl;
	}
	return 0;

}
