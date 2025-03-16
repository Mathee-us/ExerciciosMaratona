#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        string difficulties;
        cin >> difficulties;

        // There are 7 difficulty levels from 'A' to 'G'
        vector<int> count(7, 0);
        for (char c : difficulties) {
            count[c - 'A']++;
        }

        int extraNeeded = 0;
        for (int i = 0; i < 7; i++) {
            if (count[i] < m)
                extraNeeded += m - count[i];
        }

        cout << extraNeeded << "\n";
    }
    return 0;
}
