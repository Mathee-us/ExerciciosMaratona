#include <bits/stdc++.h>
using namespace std;
int main(){


    int t;
    cin >> t;

    while(t--){
        long n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        int idx(0), cnt(0);

        for(const char p : b){

            if(p == a[idx]) {
                ++cnt; ++idx;
            }
            if(idx >= a.size()) {
                break;
            }
        }

        cout << cnt <<endl;
    }

}