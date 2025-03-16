
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector <int> p(n + 1);

    for (int i = 1; i <= n; ++i) {
        cin >> p[i];
    }

    int max_depth = 0;

    for (int i = 1; i <= n; ++i) {
        int current = i;
        int depth = 0;


        while (current != -1) {
            depth++;
            current = p[current];
        }

        if (depth > max_depth) {
            max_depth = depth;
        }
    }

    cout << max_depth << endl;

    return 0;
}