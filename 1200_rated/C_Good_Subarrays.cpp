#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        vector<int>nums(n+1,0);
        for(int i=0;i<n;i++){
            nums[i+1]=s[i]-'0';
        }

        for(int i=1;i<=n;i++){
            nums[i]=nums[i-1]+nums[i];
        }

        map<int,int>mp;
        for(int i=0;i<=n;i++){
            mp[nums[i]-i]++;
        }

        long long ans=0;
        for(auto it:mp){
            long long count = it.second; 
            ans += (count * (count - 1)) / 2;
        }
        cout<<ans<<'\n';
    }
}