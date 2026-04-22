#include<bits/stdc++.h>
using namespace std;
long long MOD=998244353;
long long ncr(int n,int r){
    r=min(r,n-r);
    long long res=1;
    for(int i=1;i<=r;i++){
        res=res*(n-r+i)/i;
    }
    return res;
}
long long npr(int n,int r){
    if(r==0)return 1;
    long long res=1;
    for(int i=0;i<r;i++){
        res=((res%MOD)*((n-i)%MOD))%MOD;
    }

    return res;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int i=0;
        int j=0;
        long long count=0;
        long long ans=1;
        while(j<n){
            if(s[i]!=s[j]){
                if((j-i)>1){
                    count+=(j-i-1);
                    ans=((ans%MOD)*((j-i)%MOD))%MOD;
                }
                i=j;
                
            }
            j++;
        }
        if((j-i)>1){
            count+=(j-i-1);
            ans=((ans%MOD)*((j-i)%MOD))%MOD;
        }
        ans=((ans%MOD)*(npr(count,count)))%MOD;
        
        if(count==0){
            cout<<0<<" "<<1<<endl;
        }
        else{
            cout<<count<<" "<<ans<<endl;
        }
    }

    return 0;
}