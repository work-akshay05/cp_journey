#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;

    vector<int>nums(n);
    for(int i=0;i<n;i++)cin>>nums[i];

    vector<int>t(q);
    for(int i=0;i<q;i++)cin>>t[i];

    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        if(mp.find(nums[i])==mp.end())mp[nums[i]]=i+1;
    }

    int ans;
    for(int i=0;i<q;i++){
        int curr=t[i];
        ans=mp[curr];
        cout<<ans<<" ";
        int indi=mp[curr];
        if(indi!=1){
            for(auto &it:mp){
                if(it.second<indi){
                    it.second+=1;
                }
            }
            mp[curr]=1;
        }
    }cout<<endl;

}