#include <iostream>
#include <vector>
#include <algorithm>
#define int long long int
using namespace std;

int32_t main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> minEle;
        int currMin = a[0];
        minEle.push_back(a[0]);
        for(int i=1; i<n; i++) {
            if(currMin >= a[i]) {
                minEle.push_back(a[i]);
                currMin = a[i];
            }
        }
        reverse(begin(minEle), end(minEle));
        
        int minMakeAllZero = n;
        for(int i=0; i<minEle.size(); i++) {
            // use n-1-i type2 and _min[i] type1 moves
            minMakeAllZero = min(minMakeAllZero, minEle[i]+(n-1-i)); //we expecute step1 min[i] times bcz this will make 1st zero in arr + remaining (n-i-1) others will be made step2 i.e. run (n-i-2) times
        }
        cout << minMakeAllZero << endl;
    }

    return 0;
}
