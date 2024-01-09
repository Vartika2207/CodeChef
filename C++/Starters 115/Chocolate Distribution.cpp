#include <bits/stdc++.h>
using namespace std;

int main() {
	int tt;
	cin >> tt;
	while(tt--) {
	    int n; cin >> n;
	    int maxKids = n;
	    int minKids = (n/2 + n%2);
	    cout << minKids << " " << maxKids << endl;
	}
    return 0;
}
 