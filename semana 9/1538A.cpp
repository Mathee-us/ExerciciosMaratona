#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n, num, resp;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        vector<int> v;
        int minVal = 1000, maxVal = 0, minPos = 0, maxPos = 0;
        for (int j = 0; j < n; j++) {
            cin >> num;
            v.push_back(num);
            if (num > maxVal) {
                maxVal = num;
                maxPos = j;
            }
            if (num < minVal) {
                minVal = num;
                minPos = j;
            }
        }

        resp = min({
            max(maxPos, minPos) + 1,
            (n - 1) - min(maxPos, minPos) + 1,
            (n - 1) - maxPos + minPos + 2,
            (n - 1) - minPos + maxPos + 2
        });

        cout << resp << endl;
    }
    return 0;
}
