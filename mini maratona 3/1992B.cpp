#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(k);
        for (int &x : a) cin >> x;
        
        int max_val = *max_element(a.begin(), a.end());
        long long sum_ops = 0;
        bool first_max = false;
        
        for (int x : a) {
            if (x == 1) continue;
            if (x < max_val) {
                sum_ops += (x - 1);
            } else {
                if (!first_max) {
                    first_max = true;
                } else {
                    sum_ops += (x - 1);
                }
            }
        }
        
        sum_ops += (n - max_val);
        cout << sum_ops << '\n';
    }
    
    return 0;
}