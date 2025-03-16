#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    string result;
    for (auto it = s.rbegin(); it != s.rend(); ++it) {
        int pos = result.size() / 2;
        result.insert(result.begin() + pos, *it);
    }
    cout << result << endl;
    return 0;
}