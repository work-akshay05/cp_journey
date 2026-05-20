#include<bits/stdc++.h>
using namespace std;
int solve(int i,string &a,string &b,vector<int>&dp){
    if(i<0)return 0;
    if(i==0)return (a[i]!=b[i]);

    if(dp[i]!=-1)return dp[i];

    int v=(a[i]!=b[i]);
    int h=(a[i]!=a[i-1])+(b[i]!=b[i-1]);

    return dp[i]=min(
        solve(i-1,a,b,dp)+v,
        solve(i-2,a,b,dp)+h
    );
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;

        string a,b;
        cin>>a>>b;
        vector<int>dp(n+1,-1);
        int ans=solve(n-1,a,b,dp);
        cout<<ans<<endl;
    }
    return 0;
}