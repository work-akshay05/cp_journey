#include<bits/stdc++.h>
using namespace std;
vector<int>solve(int n,vector<int>&nums){
    unordered_map<int,int>mp;
    vector<int>ans;
    int i=0,j=1;
    while(i<n && j<n){
        if(nums[i]<nums[j]){
            int mini=nums[i];
            int maxi=nums[j];
            while(i<n && j<n && nums[i]<nums[j]){
                maxi=nums[j];
                i++;
                j++;
            }
            if(mp.find(mini)==mp.end()){
                mp[mini]++;
                ans.push_back(mini);
            }
            if(mp.find(maxi)==mp.end()){
                mp[maxi]++;
                ans.push_back(maxi);
            }
        }
        else if(nums[i]>nums[j]){
            int mini=nums[j];
            int maxi=nums[i];
            while(i<n && j<n && nums[i]>nums[j]){
                mini=nums[j];
                i++;
                j++;
            }
            if(mp.find(maxi)==mp.end()){
                mp[maxi]++;
                ans.push_back(maxi);
            }
            if(mp.find(mini)==mp.end()){
                mp[mini]++;
                ans.push_back(mini);
            }
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
        int n;
        cin>>n;

        vector<int>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        vector<int>ans=solve(n,nums);
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }cout<<endl;
    }

    return 0;
}