#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long x,y;
        cin>>x>>y;

        bool printed=false;
        long long div=y/x;
        long long z=(div-1)*x;
        if(y%z==0){
            cout<<"NO"<<endl;
            printed=true;
        }

        if(!printed){
            cout<<"YES"<<endl;
        }
    }

    return 0;
}