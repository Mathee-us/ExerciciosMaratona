#include <bits/stdc++.h>

using namespace std;

int main() {
    int num_test_cases;
    cin >> num_test_cases;
    
    for (int tc = 0; tc < num_test_cases; ++tc) {
        int strip_length, eraser_size;
        cin >> strip_length >> eraser_size;
        string paper_strip;
        cin >> paper_strip;
        
        int operation_count = 0;
        int current_pos = 0;
        
        while (current_pos < strip_length) {
            if (paper_strip[current_pos] == 'B') {
                operation_count++;
                current_pos += eraser_size;
            } else {
                current_pos++;
            }
        }
        
        cout << operation_count << '\n';
    }
    
    return 0;
}