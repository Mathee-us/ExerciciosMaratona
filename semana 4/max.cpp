#include <bits/stdc++.h>

using namespace std;
int main(){

    int n,t, point=0;

    cin>>t;

    for(int i=0;i<t;i++){
        cin >>n;
        vector<int> v(2*n);

        for(int j=0;j<2*n;j++){
            int x;
            cin >> x;
            v[j]=x;
        }
        sort(v.begin(),v.end());
        for(int j=0;j<2*n;j+=2){
            point+=v[j];
        }
        cout << point << endl;
        point=0;
    }


    return 0;
}