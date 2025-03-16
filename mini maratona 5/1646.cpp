#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n, q;
    cin >> n >> q;

    vector<long long> prefix(n + 1, 0);
    for (int i = 1; i <= n; i++){
        int x;
        cin >> x;
        prefix[i] = prefix[i - 1] + x;
    }

    while(q--){
        int a, b;
        cin >> a >> b;
        cout << prefix[b] - prefix[a - 1] << "\n";
    }

    return 0;
}
