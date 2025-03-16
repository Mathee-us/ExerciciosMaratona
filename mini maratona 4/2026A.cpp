#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int X, Y, K;
        cin >> X >> Y >> K;
        int M = min(X, Y);
        cout << 0 << " " << 0 << " " << M << " " << M << "\n";
        cout << 0 << " " << M << " " << M << " " << 0 << "\n";
    }
    return 0;
}
