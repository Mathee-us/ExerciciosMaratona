#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i =0; i<t;i++) {
        long long n;
        cin >> n;
        long long s = 0;

        while (n >= 1) {
            s += n;
            n /= 2;
        }

        cout << s << '\n';
    }

    return 0;
}