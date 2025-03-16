#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> piles(n);
        int maxa = 0;
        for (int i = 0; i < n; i++){
            cin >> piles[i];
            maxa = max(maxa, piles[i]);
        }


        vector<bool> present(n + 2, false);
        for (int i = 0; i < n; i++){
            if(piles[i] <= n + 1)
                present[piles[i]] = true;
        }
        int mex = 1;
        while(mex <= n+1 && present[mex]) {
            mex++;
        }
        bool aliceWins;
        if(mex > maxa) {
            aliceWins = (maxa % 2 == 1);
        } else {
            aliceWins = (mex % 2 == 1);
        }

        cout << (aliceWins ? "Alice" : "Bob") << "\n";
    }
    return 0;
}
