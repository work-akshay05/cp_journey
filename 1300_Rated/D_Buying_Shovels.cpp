#include<bits/stdc++.h>
using namespace std;
long long biggestdivisor(long long n, long long k){
    long long ans=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(i<=k)ans=max(ans,(long long)i);
            if((n/i)<=k)ans=max(ans,(long long)(n/i));
        }
    }
    return ans;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long n,k;
        cin>>n>>k;

        cout<<n/biggestdivisor(n,k)<<endl;

    }

    return 0;
}