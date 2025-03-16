#include <bits/stdc++.h>
using namespace std;

int main() {
    int num_test_cases;
    cin >> num_test_cases;
    
    for (int test_case = 0; test_case < num_test_cases; ++test_case) {
        int stripe_length, target_black_segment;
        cin >> stripe_length >> target_black_segment;
        string stripe;
        cin >> stripe;
        
        vector<int> white_cumulative(stripe_length + 1, 0);
        for (int i = 1; i <= stripe_length; ++i) {
            white_cumulative[i] = white_cumulative[i - 1] + (stripe[i - 1] == 'W');
        }
        
        int min_repaints = INT_MAX;
        for (int window_end = target_black_segment; window_end <= stripe_length; ++window_end) {
            int current_repaints = white_cumulative[window_end] - white_cumulative[window_end - target_black_segment];
            min_repaints = min(min_repaints, current_repaints);
        }
        
        cout << min_repaints << '\n';
    }
    
    return 0;
}