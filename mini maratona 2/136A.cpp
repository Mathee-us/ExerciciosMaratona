#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n), inverse(n);

    // Read the permutation
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    // Build the inverse permutation: friend p[i] received gift from i+1
    for (int i = 0; i < n; i++) {
        inverse[p[i] - 1] = i + 1;
    }

    // Output the inverse permutation
    for (int i = 0; i < n; i++) {
        cout << inverse[i] << " ";
    }

    return 0;
}
