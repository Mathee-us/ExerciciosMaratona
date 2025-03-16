#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n,num,m,t,l,r,sum=0;
    vector<long long int> v,v_ord,v_soma,v_soma_ord;

    cin>>n;

    for (int i=0;i<n;i++) {
        cin>>num;
        v.push_back(num);
        sum=sum+num;
        v_soma.push_back(sum);
    }

    v_ord=v;

    sort(v_ord.begin(),v_ord.end());

    sum=0;
    for (int i=0;i<n;i++) {
        num = v_ord[i];
        sum=sum+num;
        v_soma_ord.push_back(sum);
    }

    cin>>m;

    for(int i=0;i<m;i++) {
        cin>>t>>l>>r;

        l--;
        r--;

        if (t==1) {
            sum = v_soma[r];
            for(long long int j=0;j<l;j++) {
                sum=sum-v[j];
            }
            cout<<sum<<endl;
        }
        else {
            sum = v_soma_ord[r];
            for(long long int j=0;j<l;j++) {
                sum=sum-v_ord[j];
            }
            cout<<sum<<endl;
        }
    }


    return 0;
}
