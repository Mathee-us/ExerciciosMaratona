#include <bits/stdc++.h>

using namespace std;
int main(){

    int n, m[11][11]={0};

    cin>>n;
    for (int i = 0; i < n; i++) {
        m[i][0] = 1;
        m[0][i] = 1;
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            m[i][j] = m[i-1][j] + m[i][j-1];
        }
    }

    cout<<m[n-1][n-1]<<endl;



    return 0;
}