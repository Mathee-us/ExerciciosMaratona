#include <bits/stdc++.h>

using namespace std;
int main(){
    int m[1000][50]={0};
    int n,c=0,sum[1000]={0};

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> c;
        for(int j=0;j<c;j++){
            cin >> m[i][j];
            sum[i]+=abs(m[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        cout << sum[i] << endl;
    }





    return 0;
}