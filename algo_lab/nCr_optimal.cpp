    // /*
    // *   @init->initialize fact and infact (we need to call it before calling nCr with value of n)
    // *   @nCr calculate n!/(r!*(n-r)!)
    // *   @power->modular exponensation power calculation 
    // */
    // const int MOD=1e9+7;
    // vector<long long> fact, invFact;

    // long long power(long long a,long long b){
    //     long long res=1;
    //     while(b){
    //         if(b&1) res=res*a%MOD;
    //         a=a*a%MOD;
    //         b>>=1;
    //     }
    //     return res;
    // }

    // void init(int N){
    //     fact.resize(N+1);
    //     invFact.resize(N+1);

    //     fact[0]=1;
    //     for(int i=1;i<=N;i++)
    //         fact[i]=fact[i-1]*i%MOD;

    //     invFact[N]=power(fact[N],MOD-2);

    //     for(int i=N;i>=1;i--)
    //         invFact[i-1]=invFact[i]*i%MOD;
    // }

    // long long nCr(int n,int r){
    //     if(r<0 || r>n) return 0;

    //     return fact[n]
    //         * invFact[r] % MOD
    //         * invFact[n-r] % MOD;
    // }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;

    vector<int>nums(n);
    for(int i=0;i<n;i++)cin>>nums[i];

    int sum=0;
    for(int i=1;i<n;i++){
        nums[i]=nums[i]+nums[i-1];
    }

    while(q--){
        int a,b;
        cin>>a>>b;

        cout<<nums[b-1]-((a>0)?nums[a-1]:0)<<endl;
    }
}