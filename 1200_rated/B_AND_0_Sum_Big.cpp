#include<bits/stdc++.h>
using namespace std;
long long MOD=1e9+7;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin>>n>>k;

        long long ans=1;
        for(int i=0;i<k;i++){
            ans=(ans%MOD*n%MOD)%MOD;
        }

        cout<<ans<<endl;
    }

    return 0;
}