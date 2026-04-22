#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<long long>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        map<long long,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        queue<pair<int,int>>q;
        for(auto &it:mp){
            q.push({it.first,it.second});
        }
        int ans=0;
        long long num=-1; 
        while(!q.empty()){
            pair<long long,int>curr=q.front();
            if((num+1)!=curr.first){
                ans++;
            }
            num=curr.first;
            q.pop();
            if(curr.second>1){
                q.push({curr.first,curr.second-1});
            }
        }

        cout<<ans<<endl;
    }
}