#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int suf0 = 0, suf1 = 0;
        for(char c : s) {
            if(c == '0') suf0++;
            else suf1++;
        }
        int ans = min(suf0, suf1);
        int pref0 = 0, pref1 = 0;
        for(char c : s) {
            if(c == '0') {
                pref0++;
                suf0--;
            } else {
                pref1++;
                suf1--;
            }
            int custo1 = pref1 + suf0;
            int custo2 = pref0 + suf1;
            ans = min(ans, min(custo1, custo2));
        }
        cout << ans << endl;
    }
    return 0;
}