#include <bits/stdc++.h>

using namespace std;
int main(){


    int n;
    string s[100], s2[100];

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }

    for(int i=0;i<n;i++){
        if(s[i].length()<=10){// tentar = se n der
            s2[i]=s[i];
        }
        else{
            s2[i]=s[i][0]+to_string(s[i].length()-2)+s[i][s[i].length()-1];
        }
        cout<<s2[i]<<endl;
    }





    return 0;
}