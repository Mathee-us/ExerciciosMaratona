#include <bits/stdc++.h>

using namespace std;
int main(){
    int m[5][5],l,c;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>m[i][j];
            if(m[i][j]==1){
                l=i;
                c=j;
            }
        }
    }

    cout<<abs(l-2)+abs(c-2)<<endl;





    return 0;
}