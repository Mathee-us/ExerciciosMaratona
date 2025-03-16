#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        // Sort the three values.
        int arr[3] = {x1, x2, x3};
        sort(arr, arr+3);
        // The median minimizes the sum of absolute differences.
        int median = arr[1];
        int ans = abs(arr[0]-median) + abs(arr[1]-median) + abs(arr[2]-median);
        cout << ans << "\n";
    }
    return 0;
}
