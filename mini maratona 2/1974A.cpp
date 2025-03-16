#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        int screensForLarge = (y + 1) / 2;

        int availableForSmall = 15 * screensForLarge - 4 * y;

        int screens = screensForLarge;
        if(x > availableForSmall){
            int remaining = x - availableForSmall;
            screens += (remaining + 14) / 15;
        }

        cout << screens << "\n";
    }
    return 0;
}
