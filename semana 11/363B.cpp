#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,num,sum=0,j,mini=10000,ind=0;
    vector<int> v;

    cin>>n>>k;

    for(int i=0;i<n;i++) {

        cin>>num;
        v.push_back(num);
    }

    for(j=0;j<k;j++) {
        sum = sum+v[j];
    }
    mini=sum;
    for (int i=1;i<=n-k;++i) {
        sum = sum - v[i-1] + v[i+k-1];
        if(sum<mini) {
            mini=sum;
            ind=i;
        }
    }

    cout<<ind+1<<endl;


    return 0;
}
