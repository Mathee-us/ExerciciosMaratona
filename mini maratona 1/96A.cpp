#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    bool dangerous = false;
    int n = s.size();
    for (int i = 0; i <= n - 7; ++i) {
        char current = s[i];
        bool same = true;
        for (int j = 1; j < 7; ++j) {
            if (s[i + j] != current) {
                same = false;
                break;
            }
        }
        if (same) {
            dangerous = true;
            break;
        }
    }
    cout << (dangerous ? "YES" : "NO") << endl;
    return 0;
}