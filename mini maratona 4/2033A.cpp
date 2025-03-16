#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int x = 0;
        int moveNumber = 1;
        while(true){
            // Each move has distance 2*moveNumber - 1
            int distance = 2 * moveNumber - 1;
            if(moveNumber % 2 == 1) {
                // Sakurako moves in the negative direction.
                x -= distance;
            } else {
                // Kosuke moves in the positive direction.
                x += distance;
            }

            // Check if the dot is out of the allowed interval.
            if(abs(x) > n) {
                if(moveNumber % 2 == 1)
                    cout << "Sakurako" << "\n";
                else
                    cout << "Kosuke" << "\n";
                break;
            }
            moveNumber++;
        }
    }
    return 0;
}
