
#include <bits/stdc++.h>

using namespace std;
int main(){
    string s;
    int i=0;
    cin >> s;

    int count = 0;
    sort(s.begin(),s.end());
    for(i=0;i<s.size();i++){
        if(s[i]!=s[i+1]){
            count++;
        }
    }

    if(count%2==0){
        cout << "CHAT WITH HER!" << endl;
    }else{
        cout << "IGNORE HIM!" << endl;
    }




    return 0;
}