#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000007

int main() {
    int test_cases;
    cin >> test_cases;

    while(test_cases--) {
        int total_elements, limit_x, limit_y;
        cin >> total_elements >> limit_x >> limit_y;

        int small_val = limit_y / 3;
        
        if (total_elements > limit_x) {
            cout << "NO" << endl;
        }
            
        else if(total_elements <= (limit_x / 2)) {
            cout << "YES" << endl;
        }
        else if((limit_x - small_val) / 2 + small_val >= total_elements) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}