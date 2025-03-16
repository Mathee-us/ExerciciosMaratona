#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        long long x, y, k;
        cin >> x >> y >> k;

        while(x != 1 && k > 0){

            long long r = x % y;
            long long need = (y - 1) - r;

            if(need > 0){
                long long jump = min(k, need);
                x += jump;
                k -= jump;
                if(k == 0) break;
            }

            x++;
            while(x % y == 0)
                x /= y;
            k--;
        }


        if(x == 1 && k > 0){
            long long add = k % (y - 1);
            x = 1 + add;
        }

        cout << x << "\n";
    }

    return 0;
}
