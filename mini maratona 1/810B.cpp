#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    int n, f;
    cin >> n >> f;
    
    vector<long long> gains;
    long long total = 0;
    
    for (int i = 0; i < n; ++i) {
        long long ki, li;
        cin >> ki >> li;
        
        long long original = min(ki, li);
        total += original;
        
        long long new_sell = min(2 * ki, li);
        gains.push_back(new_sell - original);
    }
    
    if (f > 0) {
        sort(gains.begin(), gains.end(), greater<long long>());
        for (int i = 0; i < f; ++i) {
            total += gains[i];
        }
    }
    
    cout << total << endl;
    
    return 0;
}