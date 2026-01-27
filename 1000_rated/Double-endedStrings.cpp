#include<bits/stdc++.h>
using namespace std;
int solve(vector<vector<int>>&dp,int i,int j,string &a,string &b){
    if(i==a.size() || j==b.size() || a[i]!=b[j] )return 0;

    if(dp[i][j]!=-1)return dp[i][j];

    return dp[i][j]=1+solve(dp,i+1,j+1,a,b);

}
int main(){
    int t;
    cin>>t;

    while(t--){
        string a;
        cin>>a;

        string b;
        cin>>b;

        int n=a.size();
        int m=b.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                dp[i][j]=solve(dp,i,j,a,b);
            }
        }

        int ans=INT_MIN;
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                ans=max(ans,dp[i][j]);
            }
        }

        cout<<n+m-2*ans<<endl;
    }
}