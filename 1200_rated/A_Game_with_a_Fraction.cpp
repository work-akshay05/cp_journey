#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        bool check=true; //alice
        long long x=b-a;
        if(x>0){
            long long y=b-3*x;
            if(y>=0){
                check=false;
            }
        }
        
        if(check)cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }

    return 0;
}