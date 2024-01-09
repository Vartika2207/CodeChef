#include <bits/stdc++.h>
using namespace std;

pair<int, int> mostFrequent(vector<int> arr) {
    int n = arr.size();
    
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
        hash[arr[i]]++;

    
    int max_count = 0, res = -1;
    for (auto i : hash) {
        if (max_count < i.second) {
            res = i.first;
            max_count = i.second;
        }
    }

    pair<int, int> p;
    p.first = res;
    p.second = max_count;
    return p;
}

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        // map<pair<int, int>, int> m;
        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < n; j++) {
        //         m[{a[i], b[j]}] = (a[i] + b[j]);
        //     }
        // }

        // vector<int> mpSecond;
        // for (auto i : m)
        //     mpSecond.push_back(i.second);
        // pair<int, int> max_occ = mostFrequent(mpSecond);

        // if (max_occ.second != n) {
        //     cout << "-1" << endl;
        //     break;
        // }

        // int as[n], bs[n];
        // int idx = 0;
        // for (auto i : m) {
        //     if (i.second == max_occ.first) {
        //         as[idx] = i.first.first;
        //         bs[idx] = i.first.second;
        //         idx++;
        //     }
        // }

        // for (int i = 0; i < n; i++) {
        //     cout << as[i] << " ";
        // }
        // cout<<endl;
        // for (int i = 0; i < n; i++) {
        //     cout << bs[i] << " ";
        // }
        // cout << endl;;
        
        sort(a, a+n);
        sort(b, b+n);
        sort(b, b + n, greater<int>()); 
        set<int> s;
        for(int i=0; i<n; i++)
            s.insert(a[i]+b[i]);
        if(s.size() > 1) {
            cout << -1 << endl;
        }
        else {
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout<<endl;
        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << endl;}
    }

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;


// pair<int, int> mostFrequent(vector<int>arr) 
// { 
//     int n = arr.size();
//     // Insert all elements in hash. 
//     unordered_map<int, int> hash; 
//     for (int i = 0; i < n; i++) 
//         hash[arr[i]]++; 
  
//     // find the max frequency 
//     int max_count = 0, res = -1; 
//     for (auto i : hash) { 
//         if (max_count < i.second) { 
//             res = i.first; 
//             max_count = i.second; 
//         } 
//     } 
  
//     pair<int, int> p;
//     p.first = res; p.second = max_count;
//     return p; 
// } 

// int main() {
// 	int tt;
// 	cin >> tt;
// 	while(tt--) {
// 	    int n;
// 	    cin >> n;
// 	    int a[n], b[n];
// 	    for(int i=0; i<n; i++)
// 	        cin >> a[i];
// 	   for(int i=0; i<n; i++)
// 	        cin >> b[i];
	        
// 	   map<pair<int, int>, int> m;
// 	   for(int i=0; i<n; i++) {
// 	       for(int j=0; j<n; j++) {
// 	           m[{a[i], b[j]}] = (a[i]+b[j]);
// 	       }
// 	   }
// 	   vector<int> mpSecond;
// 	   for(auto i:m)
// 	    mpSecond.push_back(i.second);
// 	   pair<int, int> max_occ = mostFrequent(mpSecond);
// 	   if(max_occ.second != n)
// 	        return -1;
// 	   int as[n]; int bs[n];
// 	   int idx=0;
// 	    for(auto i:m) {
// 	        if(i.second == max_occ.first) {
// 	            as[idx] = m.first.first;
// 	            bs[idx] = m.first.second;
// 	            idx++;
// 	        }
	            
// 	    }
// 	    for(int i=0; i<n; i++) {
// 	        cout << as[i] << " ";
// 	    }
// 	    cout<<endl;
// 	}

// }