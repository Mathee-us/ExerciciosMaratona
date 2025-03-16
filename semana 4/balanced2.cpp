#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;

        double arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        double curr = 1, total = 0;
        sort(arr, arr + n);

        for (int i = 0; i < n - 1; i++)
        {
            if ( arr[i + 1]-arr[i] <= k)
                curr++;
            else
            {
                if(curr> total)
                    total = curr;
                curr = 1;
            }
        }

        if(curr> total)
            total = curr;
        cout << n - total << endl;
    }

}