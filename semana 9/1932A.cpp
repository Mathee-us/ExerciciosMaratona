#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n,t,coin=0,j;
    string s;
    bool flag=false,flag2=false;

    cin>>t;

    for(int i=0;i<t;i++) {
        cin>>n;
        for(int j=0;j<n;j++) {
            cin>>s[j];
        }
        coin=0;
        for(j=0;j<n;j++) {
            if (s[j] == '@') {
                coin++;
                flag=false;
            }

            else if(s[j]=='*') {
                if (flag) {
                    cout<<coin<<endl;
                    flag=false;
                    flag2=true;
                    break;
                }
                flag=true;
            }
            else
                flag=false;
        }
        if(!flag2) {
            cout<<coin<<endl;
        }
        flag2=false;






    }


}