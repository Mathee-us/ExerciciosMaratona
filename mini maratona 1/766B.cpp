#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> segments(n);
    for (int i = 0; i < n; i++) {
        cin >> segments[i];
    }
    sort(segments.begin(), segments.end());

    for (int i = 0; i < n - 2; i++) {
        if (segments[i] + segments[i + 1] > segments[i + 2]) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}
