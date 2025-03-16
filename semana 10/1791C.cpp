#include <bits/stdc++.h>

using namespace std;

int main() {
    int num_test_cases;
    cin >> num_test_cases;

    for (int case_num = 0; case_num < num_test_cases; ++case_num) {
        int final_length;
        cin >> final_length;
        string final_str;
        cin >> final_str;

        int left = 0, right = final_length - 1;
        int operations = 0;

        while (left < right && final_str[left] != final_str[right]) {
            operations++;
            left++;
            right--;
        }

        int minimal_original = final_length - 2 * operations;
        cout << minimal_original << '\n';
    }

    return 0;
}