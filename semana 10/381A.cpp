#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n;
    vector<int> v;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        v.push_back(n);
    }
    int a=0,b=0;
    for (int i = 0; i < t; i++) {

        if (v[0]>v[v.size()-1]) {
            if(i%2==0)
                a=a+v[0];
            else
                b=b+v[0];
            v.erase(v.begin());
        }
        else {
            if(i%2==0)
                a=a+v[v.size()-1];
            else
                b=b+v[v.size()-1];
            v.pop_back();
        }
    }

    cout<< a<<" "<<b<<endl;



    return 0;
}
