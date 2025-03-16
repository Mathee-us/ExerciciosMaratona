#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int &num : a) {
        cin >> num;
    }
    sort(a.rbegin(), a.rend());

    vector<int> diff(n + 2, 0);
    for (int i = 0; i < q; ++i) {
        int l, r;
        cin >> l >> r;
        diff[l]++;
        diff[r + 1]--;
    }

    vector<int> freq(n);
    int current = 0;
    for (int i = 1; i <= n; ++i) {
        current += diff[i];
        freq[i - 1] = current;
    }
    sort(freq.rbegin(), freq.rend());

    long long total = 0;
    for (int i = 0; i < n; ++i) {
        total += (long long)a[i] * freq[i];
    }

    cout << total << '\n';
    return 0;
}